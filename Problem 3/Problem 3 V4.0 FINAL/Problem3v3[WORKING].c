#include <stdio.h>
#include <stdlib.h>

/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
int main(void)
{
	
	long long arithmos = 600851475143;
	int protoi[100000];
	int arithmoi[200000];
	
	int metritis;
	int counter;
	for(metritis = 0; metritis < 200000; metritis++)
	{
		arithmoi[metritis] = metritis;
	}
//	for(metritis = 0; metritis < 200000; metritis++)
//	{
//		printf("Arithmoi:%d, metritis:%d\n",arithmoi[metritis], metritis);
//	}
	
	for(metritis = 2; metritis < 200000; metritis++)
	{
		if(metritis == 50000 || metritis == 100000 || metritis == 150000)
		{
			printf("Metritis:%d\n", metritis);
		}
		for(counter = (metritis+1); counter < 200000; counter++)
		{
			if((counter % metritis) == 0)
			{
				arithmoi[counter] = -1;
			}
		}
	}
	printf("Mpenei ston ksekatharismo twn protwn\n");
	counter = 0;
	for(metritis = 2; metritis < 200000; metritis++)
	{
		if(arithmoi[metritis] != -1)
		{
			protoi[counter] = arithmoi[metritis];
			counter++;
		}
	}
	printf("Vgenei apo ton katharismo twn protwn\n");
	protoi[counter] = -2;
	counter = 1;
	int max = 0;
	int current = protoi[0];
	printf("Mpenei ston ipologismo tou megistou\n");
	while(protoi[counter] != -2)
	{
		if(arithmos % current == 0)
		{
			arithmos = arithmos/current;
			counter = 0;
			if(current > max)
			{
				max = current;
			}
		}
		current = protoi[counter];
		counter++;
	}
	printf("Max:%d\n", max);
	return 0;
}
