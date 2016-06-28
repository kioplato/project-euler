#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int result[1000] = {0};
	int multiplicand[1000] = {0};
	int multiplier[1000] = {0};
	int calculation[1000] = {0};
	
	int digitPlier;
	int digitPlicand;
	
	int number;
	int numberSaved;
	
	int digit;
	
	int position = 999;
	
	printf("Please input the number for factorialization.\n");
	printf("Number:");
	scanf("%d", &number);
	
	numberSaved = number;
	
	while(number > 0 && position >= 0)	//pernaw ston pinaka ton arithmo.
	{
		digit = number % 10;
		number = number / 10;
		multiplicand[position] = digit;
		position--;
	}
	number = numberSaved;
	int remaining = 0;
	int times = 0;
	int counter;
	while(number != 2)
	{
		for(counter = 0; counter < 1000; counter++)
		{
			multiplier[counter] = 0;
		}
		position = 999;
		number--;
		numberSaved = number;
		while(number > 0 && position >= 0)	//pernaw ston pinaka ton arithmo.
		{
			digit = number % 10;
			number = number / 10;
			multiplier[position] = digit;
			position--;
		}
		number = numberSaved;
		position = 999;
		remaining = 0;
		for(digitPlier = 999; digitPlier >= 0; digitPlier--)
		{
			position = digitPlier;
			for(digitPlicand = 999; digitPlicand >= 0; digitPlicand--)
			{
				result[position] += remaining + (multiplicand[digitPlicand] * multiplier[digitPlier]);
				remaining = 0;
				if(result[position] >= 10)
				{
					remaining = result[position] / 10;
					result[position] = result[position] % 10;
				}
				if(position > 0)
				{
					position--;
				}
			}
		}
		for(position = 0; position < 1000; position++)
		{
			printf("%d", calculation[position]);
			multiplicand[position] = result[position];
			calculation[position] = result[position];
			result[position] = 0;
		}
		printf("With number: %d\n", number);
		printf("\n");
		times++;
	}
	int sum = 0;
	for(position = 0; position < 1000; position++)
	{
		sum = sum + calculation[position];
	}
	printf("Remaining: %d\n", remaining);
	printf("Result:%d\n", sum);
	return 0;
}
