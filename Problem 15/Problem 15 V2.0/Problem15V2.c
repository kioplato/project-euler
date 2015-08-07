#include <stdio.h>
#include <stdlib.h>

/*
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
How many such routes are there through a 20×20 grid?
*/

int main()
{
	
	system("mode CON: COLS=600");
	long long unsigned grid[21][21];	//desmefsh mnimhs gia tin metavliti grid
	int grames;	//desmevw xoro gia tin metavliti grames
	int stiles;	//desmevw xoro gia tin metavliti stiles
	for(grames = 0; grames < 20; grames++)
	{
		for(stiles = 0; stiles < 20; stiles++)
		{
			grid[grames][stiles] = 0;
		}
	}
	for(grames = 0; grames < 21; grames++)	//arxikopoihsh tou periexomenou ths metavlitis grid
	{
		grid[20][grames] = 1;
		grid[grames][20] = 1;
	}
	
	for(grames = 0; grames < 21; grames++)
	{
		printf("\n");
		for(stiles = 0; stiles < 21; stiles++)
		{
		//	printf("%d	", grid[grames][stiles]);
		}
	}
	
	for(grames = 19; grames >= 0; grames--)	//ksekinaw ton ipologismo olwn twn pithanon monopatiwn antistrofa omos (labirinthos ? Stous labirinthous i efkoli lisi
											//einai na ksekinisesi apo to telos pros tin arxi kathos den xriazete na koitaksesi ta perita monopatia.
	{
		for(stiles = 19; stiles >= 0; stiles--)
		{
			grid[grames][stiles] = grid[grames+1][stiles] + grid[grames][stiles+1];
		}
	}
	printf("stiles:%d\n", stiles);
	printf("grames:%d\n", grames);
	for(grames = 0; grames < 21; grames++)
	{
		printf("\n");
		for(stiles = 0; stiles < 21; stiles++)
		{
			printf("	%d", grid[grames][stiles]);
		}
	}
	printf("\n");
	long long unsigned apotelesma;
	apotelesma = grid[0][0];
	printf("Apotelesma: %Lud\n", apotelesma);
	return 0;
}
