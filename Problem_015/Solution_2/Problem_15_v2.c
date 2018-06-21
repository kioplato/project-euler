#include <stdio.h>
#include <stdlib.h>

/*
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
How many such routes are there through a 20×20 grid?
*/

int main(void)
{
	
	system("mode CON: COLS=600");	//im doing this because I want more space so i can print the solution to every subproblem.
	
	long long unsigned grid[21][21];	//im doing this because the number is going to be too big to fit inside an integer.
	int lines;
	int rows;
	for(lines = 0; lines < 20; lines++)
	{
		for(rows = 0; rows < 20; rows++)
		{
			grid[lines][rows] = 0;
		}
	}
	for(lines = 0; lines < 21; lines++)	//because there is only one route to get to the bottom right node from any side node.
	{
		grid[20][lines] = 1;
		grid[lines][20] = 1;
	}
	
	for(lines = 19; lines >= 0; lines--)
	{
		for(rows = 19; rows >= 0; rows--)
		{
			grid[lines][rows] = grid[lines + 1][rows] + grid[lines][rows + 1];
		}
	}
	for(lines = 0; lines < 21; lines++)	//because i want to have a general idea of how each subproblem is getting solved out.
	{
		printf("\n");
		for(rows = 0; rows < 21; rows++)
		{
			printf("	%llu", grid[lines][rows]);
		}
	}
	printf("\n");
	long long unsigned result;
	result = grid[0][0];
	printf("Result: %llu\n", result);
	return 0;
}
