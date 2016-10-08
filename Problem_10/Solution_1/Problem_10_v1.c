#include <stdio.h>

/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

int main()
{
	int i = 0;
	int k = 0;
	int divided = 0;
	long long unsigned sum = 0;
	for(i = 2; i <= 2000000; i++)
	{
		divided = 0;
		for(k = 1; k <= i; k++)
		{
			if(i % k == 0)
			{
				divided++;
			}
			if(divided == 3)
			{
				break;
			}
		}
		if(divided == 2)
		{
			sum += i;
		}
	}
	printf("Athrisma: %llu\n", sum);
	return 1;
}
