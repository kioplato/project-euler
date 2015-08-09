#include <stdio.h>

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

int main()
{
	long i;							//variable declaration type of i. Use: to count from 1 to 100.
	long iTetragono = 0;			//variable declaration type and initialization of iTetragono. Use: to store the squared i variable.
	long athrismaTetragonwn = 0;	//variable declaration type and initialization of athrismaTetragonwn. Use: to store the square of every number.
	long athrisma = 0;				//variable declaration type and initialization of athrisma. Use: to store the sum.
	for(i = 1;i <= 100; i++)		//for loop. Used to count from i to 100.
	{
		iTetragono = i * i;			//variable iTetragono in action. Use: to store the squared i.
		athrismaTetragonwn = athrismaTetragonwn + iTetragono;	//variable athrismaTetragonwn in action. Use: to store the sum of iTetragono.
		athrisma = athrisma + i;	//variable athrisma in action. Use: to store the variable i.
	}
	athrisma = athrisma * athrisma;	//variable athrisma in action. Use: to store the squared athrisma.
	printf("%ld\n", athrisma - athrismaTetragonwn);	//printf function from stdio.h library. Use: to show the user the output of the calcualtion.
	
}
