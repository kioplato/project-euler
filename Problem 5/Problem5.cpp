#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int HIGH_DIVISOR = 20;
	int counter;
	int number = 20; 	//because 20 is the high divisor.
	
	for( counter = 1; counter <= HIGH_DIVISOR; counter++)
	{
		if(number % counter != 0)
		{
			number += HIGH_DIVISOR;
			counter = 0;
		}
	}
	printf("%d\n", number);	//printf function from stdio.h library. Use: to let the user know the outcome of the calculation.
}
