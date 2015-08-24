#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number[1000];
	int result;
	int base;
	int power;
	printf("Please input the base:");
	scanf("%d", &base);
	printf("\nPlease input the power:");
	scanf("%d", &power);
	
	
	int counter;
	
	for(counter = 0; counter < 1000; counter++)
	{
		number[counter] = 0;
	}
	
	number[999] = 1;
	
	int times = 0;
	
	int multiplicand;
	int multiplier;
	multiplier = base;
	
	int remaining = 0;
	
	while(times < power)
	{
		for(multiplicand = 999; multiplicand >= 0; multiplicand--)
		{
			result = (number[multiplicand] * multiplier) + remaining;
			remaining = 0;
			if(result >= 10)
			{
				remaining = result / 10;
				result %= 10;
			}
			number[multiplicand] = result;
		}
		
		times++;
	}
	
	int print = 0;
	result = 0;
	for(counter = 0; counter < 1000; counter++)
	{
		if(number[counter] != 0 && print == 0)
		{
			printf("%d", number[counter]);
			result += number[counter];
			print = 1;
		}
		else if(print == 1)
		{
			printf("%d", number[counter]);
			result += number[counter];
		}
	}
	printf("The result is: %d\n", result);
	return 0;
}
