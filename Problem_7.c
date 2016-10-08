#include <stdio.h>
#include <math.h>

//What is the 10 001st prime number?

int CheckPrime(int i)
{
	int z;
	int divided = 0;
	int root = sqrt(i);

	for(z = 1; z <= root; z++)
	{
		if(i % z == 0)
		{
			divided++;
		}
		if(divided == 2)		//when there isn't only one divisor(1) then stop checking because we already can tell that it isn't prime.
		{
			break;
		}
	}
	return (divided == 1);		//because it's prime when there is only one divisor below root, 1.
}

int main(void)
{
	int i = 2;
	int k = 0;
	int isPrime;
	while(k != 10001)
	{
		isPrime = 0;
		isPrime = CheckPrime(i);
		if(isPrime == 1)
		{
			k++;
		}
		i++;
	}
	printf("%d\n", i-1);
	return 0;
}
