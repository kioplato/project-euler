#include <stdio.h>

long long unsigned sumDivisors(long long unsigned number);

int main(void)
{
	long long unsigned counter;
	long long unsigned sumCounterA = 0;
	long long unsigned sumCounterB = 0;
	
	long long unsigned calculation = 0;
	
	for(counter = 2; counter < 10000; counter++)
	{
		sumCounterA = sumDivisors(counter);
		sumCounterB = sumDivisors(sumCounterA);
	
		if(sumCounterB == counter && counter != sumCounterA)
		{
			calculation += counter;
		}
	}
	printf("Result: %d", calculation);
}

long long unsigned sumDivisors(long long unsigned number)
{
	long long unsigned counter;
	long long unsigned sum = 0;
	
	if(number == 2)
	{
		return 1;
	}
	for(counter = 1; counter < number; counter++)
	{
		if(number % counter == 0)
		{
			sum += counter;
		}
	}
	return sum;
}

