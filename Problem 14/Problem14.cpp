#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int metritis = 0;
	int mikosChain = 0;
	int MaxChain = 0;
	int MaxNum = 0;
	long long ipologismos = 0;
	for(metritis = 2; metritis < 1000000; metritis++)
	{
		mikosChain = 1;
		ipologismos = 0.0;
		ipologismos = metritis;
		while(ipologismos > 1)
		{
			if((ipologismos % 2) == 0)
			{
				ipologismos = (ipologismos/2);
			}
			else
			{
				ipologismos = (3 * ipologismos) + 1;
			}
			mikosChain++;
		}
		if(mikosChain > MaxChain)
		{
			MaxChain = mikosChain;
			MaxNum = metritis;
		}
		//printf("MaxNum:%d\n",MaxNum);
	}
	printf("O arithmos einai o: %d kai exei mikos alisidas: %d\n",MaxNum,MaxChain);
}
