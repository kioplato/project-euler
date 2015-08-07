#include <stdio.h>
#include <stdlib.h>

int main()
{
	int primeArray[10000];
	int arithmos = 600851475;
	int divised;
	int i = 0;
	
	for(int counter = 1; counter <= (arithmos/2); counter++)
	{
		divised = 0;
		for(int metritis = 1; metritis <= (counter/2); metritis++)
		{
			if(counter % metritis == 0)
			{
				divised++;
			}
		}
		if(divised == 2)
		{
			primeArray[i] = counter;
			i++;
		}
	}
	
}
