#include <stdio.h>
#include <stdlib.h>

/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

int main(void)
{
	
	const long long unsigned NUMBER = 600851475143;
	printf("%llu \n", NUMBER);
	
	int primes[100000];
	int numbers[200000];
	
	int counterA;
	int counterB;
	printf("1/3\n");
	for(counterA = 0; counterA < 200000; counterA++)
	{
		numbers[counterA] = counterA;
	}
	for(counterA = 2; counterA < 200000; counterA++)
	{
		for(counterB = (counterA + 1); counterB < 200000; counterB++)
		{
			if((counterB % counterA) == 0)
			{
				numbers[counterB] = -1;
			}
		}
	}
	printf("2/3\n");
	counterB = 0;
	for(counterA = 2; counterA < 200000; counterA++)
	{
		if(numbers[counterA] != -1)
		{
			primes[counterB] = numbers[counterA];
			counterB++;
		}
	}
	printf("3/3\n");
	primes[counterB] = -2;
	counterB = 1;
	long long unsigned tempNumber = NUMBER;
	int max = 0;
	int current = primes[0];
	while(primes[counterB] != -2)
	{
		if(tempNumber % current == 0)
		{
			tempNumber = tempNumber/current;
			counterB = 0;
			if(current > max)
			{
				printf("%d\n", max);
				max = current;
			}
		}
		current = primes[counterB];
		counterB++;
	}
	printf("Max:%d\n", max);
	return 0;
}
