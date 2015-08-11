#include <stdio.h>
#include <stdlib.h>

/*
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
How many such routes are there through a 20×20 grid?
*/

/*
Prosopiki simiwsh: tha kataskevasw ena grafima opos stis domes dedomenwn kai tha valw se kathe comvo pou tha ginete malloc ena struct pou tha exei
kato pedi kai deksi pedi. Meta tha kanw mia sinartisi pou tha litourgei anadromika kai tha kanei prioritiza to kato pedi apo to deksi kalontas ksana
ton eafto tis. kathe fora pou tha ftanei sto deksi pedi == null kai kato pedi == null tha afksanei ton metriti.

EDIT: i kalitera me enan pinaka :) Den mplekw me malloc kai sindesi me pointers.
*/

//an to KatoPaidi i to DeksiPaidi == 1 tote exei akmi. alios den iparxei epafi.
struct stoixeio{
	int KatoPaidi;
	int DeksiPaidi;
};

typedef struct stoixeio stoixeio;

int Diataksi(long long unsigned * counter, stoixeio array[21][21], int grames, int stiles);

int main()
{
	stoixeio array[21][21];
	int grames;
	int stiles;
	
	for(grames = 0; grames < 21; grames++)
	{
		for(stiles = 0; stiles < 21; stiles++)
		{
			array[grames][stiles].KatoPaidi = 1;
			array[grames][stiles].DeksiPaidi = 1;
		}
	}
	for(stiles = 0; stiles < 21; stiles++)
	{
		array[20][stiles].KatoPaidi = 0;
	}
	for(grames = 0; grames < 21; grames++)
	{
		array[grames][20].DeksiPaidi = 0;
	}
	
	long long unsigned counter;
	counter = 0;
	
	grames = 0;
	stiles = 0;
	
	Diataksi(&counter, array, grames, stiles);
	
	printf("Counter:%d\n", counter);
	printf("Counter:%d\n", 137846528820);
	return 0;
}

int Diataksi(long long unsigned * counter, stoixeio array[21][21], int grames, int stiles)
{
	if(array[grames][stiles].KatoPaidi == 1)
	{
		grames++;
		Diataksi(counter, array, grames, stiles);
		grames--;
	}
	if(array[grames][stiles].DeksiPaidi == 1)
	{
		stiles++;
		Diataksi(counter, array, grames, stiles);
		stiles--;
	}
	if(array[grames][stiles].KatoPaidi == 0 && array[grames][stiles].DeksiPaidi == 0)
	{
		(*counter)++;
	}
	return 0;
}
