#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

int main(void)
{
	int * numbers;
	
	numbers = malloc(2000000 * sizeof(int));
	if(numbers == NULL)
	{
		printf("Error malloc numbers\n");
		return 1;
	}
	
	unsigned long long int counterA;
	unsigned long long int counterB;
	int sum[100] = {0};
	sum[99] = 2;
	
	while(counterA < 2000000)
	{
		numbers[counterA] = counterA;
		counterA++;
	}
	int saved;
	int position;
	int remaining = 0;
	counterA = 2;
	counterB = 0;
	while(counterA < 2000000)
	{	
		while(numbers[counterA] == -1)
		{
			counterA++;
		}
		saved = numbers[counterA];		//basic addition using arrays.
		position = 99;
		while(saved >= 0 && position >= 0)
		{
			sum[position] = sum[position] + (saved % 10) + remaining;
			remaining = 0;
			if(saved != 0)
			{
				saved = saved / 10;
			}
			if(sum[position] >= 10)
			{
				remaining = (sum[position] / 10);
				sum[position] = sum[position] % 10;
			}
			position--;
		}							//end of addition using arrays.
		counterB = counterA;
		while(counterB < 2000000)
		{
			counterB = counterB + counterA;		//we want to speed up the prossess so we lock on to the multipliers of counterA.
			if(counterB < 2000000)
			{
				numbers[counterB] = -1;
			}
		}
		counterA++;
	}
	for(position = 0; position < 100; position++)
	{
		printf("%d", sum[position]);
	}
	return 0;
}
