#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

int main(void)
{
	
	//printf("%d");
	//system("pause");
	int *arithmoi;
	
	arithmoi = malloc(2000000 * sizeof(int));
	if(arithmoi == NULL)
	{
		printf("Provlima sto malloc tou arithmoi\n");
		return 1;
	}
	
	unsigned long long int metritis;
	unsigned long long int counter;
	int sum[100] = {0};
	sum[99] = 2;
	
	while(metritis < 2000000)
	{
		arithmoi[metritis] = metritis;
		metritis++;
	}
	int saved;
	int thesi;
	int ipolipo = 0;
	metritis = 2;
	counter = 0;
	while(metritis < 2000000)
	{	
		while(arithmoi[metritis] == -1)
		{
			metritis++;
		}
		saved = arithmoi[metritis];
		thesi = 99;
		while(saved >= 0 && thesi >= 0)
		{
			sum[thesi] = sum[thesi] + (saved % 10) + ipolipo;
			ipolipo = 0;
			if(saved != 0)
			{
				saved = saved / 10;
			}
			if(sum[thesi] >= 10)
			{
				ipolipo = (sum[thesi] / 10);
				sum[thesi] = sum[thesi] % 10;
			}
			thesi--;
		}
		for(thesi = 0; thesi < 100; thesi++)
		//{
		/*if(sum[thesi] != 0 && ektipwse == 0)
		{
			ektipwse = 1;
			printf("%d",sum[thesi]);
		}
		else if(ektipwse == 1)
		{
			printf("%d",sum[thesi]);
		}*/
		//printf("%d",sum[thesi]);
		//}
		//system("pause");
		counter = metritis;
		while(counter < 2000000)
		{
			counter = counter + metritis;
			if(counter < 2000000)
			{
				arithmoi[counter] = -1;
			}
		}
		metritis++;
	}
	int ektipwse = 0;
	for(thesi = 0; thesi < 100; thesi++)
	{
		/*if(sum[thesi] != 0 && ektipwse == 0)
		{
			ektipwse = 1;
			printf("%d",sum[thesi]);
		}
		else if(ektipwse == 1)
		{
			printf("%d",sum[thesi]);
		}*/
		printf("%d",sum[thesi]);
	}
	return 0;
}
