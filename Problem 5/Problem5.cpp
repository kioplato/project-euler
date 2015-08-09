#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 20;		//variable declaration of type and initialization of i. Use: to sum all the numbers that are divided by 2-20.
	
	while (i %  2 != 0 || i %  3 != 0 || i %  4 != 0 || i %  5 != 0 ||
         i %  6 != 0 || i %  7 != 0 || i %  8 != 0 || i %  9 != 0 ||
         i % 10 != 0 || i % 11 != 0 || i % 12 != 0 || i % 13 != 0 ||
         i % 14 != 0 || i % 15 != 0 || i % 16 != 0 || i % 17 != 0 ||
         i % 18 != 0 || i % 19 != 0 || i % 20 != 0)
	{
    	i += 20;		//variable i in action. Use: increase variable i by 20 since 20 is the largest need.
	}
	printf("%d\n", i);	//printf function from stdio.h library. Use: to let the user know the outcome of the calculation.
	return 0;
}
