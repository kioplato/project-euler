#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dentro[15][15] = {{75},
						 {95, 64},
						 {17, 47, 82},
						 {18, 35, 87, 10},
						 {20, 04, 82, 47, 65},
						 {19, 01, 23, 75, 03, 34},
						 {88, 02, 77, 73, 07, 63, 67},
						 {99, 65, 04, 28, 06, 16, 70, 92},
						 {41, 41, 26, 56, 83, 40, 80, 70, 33},
						 {41, 48, 72, 33, 47, 32, 37, 16, 94, 29},
						 {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14},
						 {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57},
						 {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48},
						 {63, 66, 04, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31},
						 {04, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 04, 23}};
						 
	int grames;
	int stiles;
	
	for(grames = 0; grames < 15; grames++)\
	{
		printf("\n");
		for(stiles = 0; stiles < 15; stiles++)
		{
			printf("Arithmos:%d\n", dentro[grames][stiles]);
		}
	}
	
	for(grames = 14; grames > 0; grames--)
	{
		printf("Mpike\n");
		for(stiles = 0; stiles < 14; stiles++)
		{
			if(dentro[grames][stiles] >= dentro[grames][stiles+1])
			{
				dentro[grames-1][stiles] += dentro[grames][stiles];
			}
			else
			{
				dentro[grames-1][stiles] += dentro[grames][stiles+1];
			}
		}
	}
	printf("Apotelesma:%d\n",dentro[0][0]);
	return 0;
}
