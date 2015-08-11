#include <stdio.h>
#include <stdlib.h>

/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
int main(void)
{
	
	long long arithmos = 600851475143;		//variable declaration type and initialization of arithmos. Use: to save the target number.
	int protoi[100000];						//variable declaration type of protoi. Use: to store prime numbers.
	int arithmoi[200000];					//variable declaration type of arithmoi. Use: to store all numbers up to 20.000.
	
	int metritis;		//variable declaration type of metritis. Use: to count up to 20.000 and as an index for arithmoi array.
	int counter;		//variable declaration type of counter. Use: toc count from metritis + 1 up to 200.000.
	for(metritis = 0; metritis < 200000; metritis++)		//for loop. Use: to count up to 20.000.
	{
		arithmoi[metritis] = metritis;						//arithmoi variable in action. Use: to initialize the array
	}
	for(metritis = 2; metritis < 200000; metritis++)		//for loop. Use: to count up to 200.000.
	{
		if(metritis == 50000 || metritis == 100000 || metritis == 150000)	//if statement. Use: to check if metritis variable as either 50.000, 100.000 or 150.000. Use: debugging.
		{
			printf("Metritis:%d\n", metritis);				//printf function from stdio.h library. Use: debugging.
		}
		for(counter = (metritis+1); counter < 200000; counter++)	//for loop. Use: to count from metritis + 1 up to 200.000.
		{
			if((counter % metritis) == 0)					//if statement. Use: to check if a number is non prime.
			{
				arithmoi[counter] = -1;						//arithmoi variable in action. Use: to "kick" the non prime numbers out of the table.
			}
		}
	}
	printf("Mpenei ston ksekatharismo twn protwn\n");		//printf function from stdio.h library. Use: debugging.
	counter = 0;											//initialize counter variable. Use: to start counting from 0.
	for(metritis = 2; metritis < 200000; metritis++)		//for loop. Use: to count up to 200.000.
	{
		if(arithmoi[metritis] != -1)						//if statement. Use: to keep only the prime numbers.
		{
			protoi[counter] = arithmoi[metritis];			//protoi variable in action. Use: to store the prime numbers in it.
			counter++;										//counter variable in action. Use: index for protoi variable.
		}
	}
	printf("Vgenei apo ton katharismo twn protwn\n");		//printf function from stdio.h library. Use: debugging.
	protoi[counter] = -2;									//protoi variable in action. Use: to allow the program to know where the prime numbers stop.
	counter = 1;											//counter variable in action. Use: to start counting from 2nd array cell.
	int max = 0;											//variable declaration of type and initialization of max. Use: to sum in it all the prime numbers.
	int current = protoi[0];
	printf("Mpenei ston ipologismo tou megistou\n");		//printf function from stdio.h library. Use: debugging.
	while(protoi[counter] != -2)							//while loop. Use: to stop the loop when protoi is -2.
	{
		if(arithmos % current == 0)							//if statement. Use: to check if variable arithmos is divided by current.
		{
			arithmos = arithmos/current;					//arithmos variable in action. Use: to change the variable arithmos into a value that fits this-> aritgmos x current = old arithmos.
			counter = 0;									//use of counter variable. Use: to start counting from 0.
			if(current > max)								//if statement. Use: to check if current is greater than man.
			{
				max = current;								//max value in action. Use: to store the new maximum into max.
			}
		}
		current = protoi[counter];							//current variable in action. Use: to fetch the new prime number.
		counter++;											//counter variable in action. Use: to increase the coutner value by one.
	}
	printf("Max:%d\n", max);								//printf function from stdio.h library. Use: to let the user know the outcome of the calculation.
	return 0;
}
