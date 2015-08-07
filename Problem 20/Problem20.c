#include <stdio.h>
#include <stdlib.h>

int main()
{
	int apotelesma[1000] = {0};
	int pollaplasiasteos[1000] = {0};
	int pollaplasiastis[1000] = {0};
	int Teliko[1000] = {0};
	
	int psifioSTHS;
	int psifioTEOS;
	
	int arithmos;
	int arithmosSAVED;
	
	int psifio;
	
	int thesi = 999;
	
	printf("Parakalw dwste ton arithmo gia na efarmostei o paragontikos tou.\n");
	printf("Arithmos:");
	scanf("%d", &arithmos);
	
	arithmosSAVED = arithmos;
	
	while(arithmos > 0 && thesi >= 0)	//pernaw ston pinaka ton arithmo.
	{
		psifio = arithmos % 10;
		arithmos = arithmos / 10;
		pollaplasiasteos[thesi] = psifio;
		thesi--;
	}
	arithmos = arithmosSAVED;
	int ipolipo = 0;
	int fores = 0;
	int metritis;
	while(arithmos != 2)
	{
		printf("MpikeARITHMOS:%d\n", arithmos);
		for(metritis = 0; metritis < 1000; metritis++)
		{
			pollaplasiastis[metritis] = 0;
		}
		thesi = 999;
		arithmos--;
		arithmosSAVED = arithmos;
		while(arithmos > 0 && thesi >= 0)	//pernaw ston pinaka ton arithmo.
		{
			psifio = arithmos % 10;
			arithmos = arithmos / 10;
			pollaplasiastis[thesi] = psifio;
			thesi--;
		}
		arithmos = arithmosSAVED;
		thesi = 999;
		ipolipo = 0;
		for(psifioSTHS = 999; psifioSTHS >= 0; psifioSTHS--)
		{
			thesi = psifioSTHS;
			for(psifioTEOS = 999; psifioTEOS >= 0; psifioTEOS--)
			{
				apotelesma[thesi] = apotelesma[thesi] + ipolipo + (pollaplasiasteos[psifioTEOS] * pollaplasiastis[psifioSTHS]);
				ipolipo = 0;
				if(apotelesma[thesi] >= 10)
				{
					ipolipo = apotelesma[thesi] / 10;
					apotelesma[thesi] = apotelesma[thesi] % 10;
				}
				if(thesi > 0)
				{
					thesi--;
				}
			}
		}
		for(thesi = 0; thesi < 1000; thesi++)
		{
			printf("%d",Teliko[thesi]);
			pollaplasiasteos[thesi] = apotelesma[thesi];
			Teliko[thesi] = apotelesma[thesi];
			apotelesma[thesi] = 0;
		}
		printf("Me arithmo:%d\n", arithmos);
		//system("pause");
		printf("\n");
		fores++;
	}
	int athrisma = 0;
	for(thesi = 0; thesi < 1000; thesi++)
	{
		athrisma = athrisma + Teliko[thesi];
	}
	printf("Ipolipo:%d\n",ipolipo);
	printf("Apotelesma:%Lu\n",athrisma);
	return 0;
}
