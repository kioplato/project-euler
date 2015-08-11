#include <stdio.h>
#include <stdlib.h>

int main()
{
	int primeArray[10000];
	int NUMBER = 600851475;
	int divised;
	int i = 0;
	
	for(int counter = 1; counter <= (NUMBER/2); counter++)
	{
		divised = 0;
		for(int metritis = 1; metritis <= (NUMBER/2); metritis++)
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
