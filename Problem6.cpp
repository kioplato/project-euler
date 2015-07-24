#include <stdio.h>

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

int main()
{
	long i;
	long iTetragono = 0;
	long athrismaTetragonwn = 0;
	long athrisma = 0;
	for(i = 1;i <= 100; i++)
	{
		iTetragono = i * i;
		athrismaTetragonwn = athrismaTetragonwn + iTetragono;
		athrisma = athrisma + i;
	}
	athrisma = athrisma * athrisma;
	printf("%ld\n", athrisma - athrismaTetragonwn);
	
}
