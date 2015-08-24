#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int counter = 0;
	int lengthChain = 0;
	int MaxChain = 0;
	int MaxNum = 0;
	long long calculation = 0;
	for(counter = 2; counter < 1000000; counter++)
	{
		lengthChain = 1;
		calculation = 0;
		calculation = counter;
		while(calculation > 1)
		{
			if((calculation % 2) == 0)
			{
				calculation = (calculation / 2);
			}
			else
			{
				calculation = (3 * calculation) + 1;
			}
			lengthChain++;
		}
		if(lengthChain > MaxChain)
		{
			MaxChain = lengthChain;
			MaxNum = counter;
		}
	}
	printf("The number is: %d and has a chain length of: %d\n", MaxNum, MaxChain);
}
