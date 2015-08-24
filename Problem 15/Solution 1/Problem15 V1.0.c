#include <stdio.h>
#include <stdlib.h>

/*
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
How many such routes are there through a 20×20 grid?
*/

//an to KatoPaidi i to DeksiPaidi == 1 tote exei akmi. alios den iparxei epafi.

struct element{
	int downChild;
	int rightChild;
};

typedef struct element element;

int Arrangement(long long unsigned * counter, element array[21][21], int lines, int rows);

int main()
{
	element array[21][21];
	int lines;
	int rows;
	
	for(lines = 0; lines < 21; lines++)
	{
		for(rows = 0; rows < 21; rows++)
		{
			array[lines][rows].downChild = 1;
			array[lines][rows].rightChild = 1;
		}
	}
	for(rows = 0; rows < 21; rows++)
	{
		array[20][rows].downChild = 0;
	}
	for(lines = 0; lines < 21; lines++)
	{
		array[lines][20].rightChild = 0;
	}
	
	long long unsigned counter;
	counter = 0;
	
	lines = 0;
	rows = 0;
	
	Arrangement(&counter, array, lines, rows);
	
	printf("Counter:%llu\n", counter);
	return 0;
}

int Arrangement(long long unsigned * counter, element array[21][21], int lines, int rows)
{
	if(array[lines][rows].downChild == 1)
	{
		lines++;
		Arrangement(counter, array, lines, rows);
		lines--;
	}
	if(array[lines][rows].rightChild == 1)
	{
		rows++;
		Arrangement(counter, array, lines, rows);
		rows--;
	}
	if(array[lines][rows].downChild == 0 && array[lines][rows].rightChild == 0)
	{
		(*counter)++;
	}
	return 0;
}
