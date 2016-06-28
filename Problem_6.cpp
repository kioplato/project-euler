#include <stdio.h>

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

int main()
{
	long i;
	long iSquared = 0;
	long squareSum = 0;
	long sum = 0;
	
	for(i = 1; i <= 100; i++)
	{
		iSquared = i * i;
		squareSum = squareSum + iSquared;
		sum = sum + i;
	}
	sum = sum * sum;
	printf("%ld\n", sum - squareSum);
	
}
