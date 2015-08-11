#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arithmos[1000];
	int apotelesma;
	int vash;
	int dunamh;
	printf("Parakalw dwste tin vash:");
	scanf("%d",&vash);
	printf("\nParakalw dwste thn dunamh:");
	scanf("%d",&dunamh);
	
	
	int metritis;
	
	for(metritis = 0; metritis < 1000; metritis++)
	{
		arithmos[metritis] = 0;
	}
	
	arithmos[999] = 1;
	
	int fores = 0;
	
	int polaplasiasteos;
	int polaplasiastis;
	polaplasiastis = vash;
	
	int ipolipo = 0;
	
	while(fores < dunamh)
	{
		for(polaplasiasteos = 999; polaplasiasteos >= 0; polaplasiasteos--)
		{
			apotelesma = (arithmos[polaplasiasteos] * polaplasiastis) + ipolipo;
			ipolipo = 0;
			if(apotelesma >= 10)
			{
				ipolipo = apotelesma / 10;
				apotelesma = apotelesma % 10;
			}
			arithmos[polaplasiasteos] = apotelesma;
		}
		
		fores++;
	}
	
	int ektipwne = 0;
	apotelesma = 0;
	for(metritis = 0; metritis < 1000; metritis++)
	{
		if(arithmos[metritis] != 0 && ektipwne == 0)
		{
			printf("%d",arithmos[metritis]);
			apotelesma = apotelesma + arithmos[metritis];
			ektipwne = 1;
		}
		else if(ektipwne == 1)
		{
			printf("%d",arithmos[metritis]);
			apotelesma = apotelesma + arithmos[metritis];
		}
	}
	printf("To apotelesma einai: %d\n", apotelesma);
	return 0;
}
