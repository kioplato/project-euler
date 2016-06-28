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
	int next = 0;
	printf("1/3\n");
	for(counterA = 0; counterA < 200000; counterA++)
	{
		numbers[counterA] = counterA;
	}
	for(counterA = 2; counterA < 200000; counterA++)		//we are using eratosthenes sieve method.
	{
		if(numbers[counterA] != -1)
		{
			for(counterB = (counterA + 1); counterB < 200000; counterB++)
			{
				if((counterB % counterA) == 0)
				{
					numbers[counterB] = -1;			//we check out any number that is multiple of a prime number so we wont store non-prime numbers into our array "primes".
				}
			}
			primes[next] = numbers[counterA];		//we store all the primes into an array so we can have a refrence to them afterwards.
			next++;
		}
	}
	printf("3/3\n");
	primes[next] = -2;
	counterB = 0;
	long long unsigned tempNumber = NUMBER;
	int max = 0;
	int current = primes[0];
	while(primes[counterB] != -2)
	{
		if(tempNumber % current == 0)
		{
			tempNumber = tempNumber/current;	//we divide the number and then store the prime divisor if its the max we have encountered so far.
			counterB = 0;
			if(current > max)
			{
				max = current;
			}
		}
		current = primes[counterB];
		counterB++;
	}
	printf("Max:%d\n", max);
	return 0;
}
