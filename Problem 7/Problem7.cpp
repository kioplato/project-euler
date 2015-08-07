#include <stdio.h>

//What is the 10 001st prime number?

int CheckPrime(int i)
{
	int z;
	int divided = 0;
	for(z = 1; z<= i; z++)
	{
		if(i % z == 0)
		{
			divided++;
		}
	}
	if(divided == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
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
