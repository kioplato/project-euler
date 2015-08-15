#include <stdio.h>
#include <stdlib.h>

int main()
{
	int primeArray[10000];
	const long long unsigned NUMBER = 600851475143;
	long long unsigned tempNumber = NUMBER;
	int divised;
	int i = 0;
	
	for(int counterA = 1; counterA <= (tempNumber/2); counterA++)
	{
		divised = 0;
		for(int counterB = 1; counterB <= (tempNumber/2); counterB++)		//tempNumber divided by 2 because the NUMBER can't have any divisors bellow NUMBER/2. (did not know about sqrt(NUMBER) back then)
		{
			if(counterA % counterB == 0)
			{
				divised++;
			}
		}
		if(divised == 2)
		{
			primeArray[i] = counterA;
			i++;
		}
	}
	
}
