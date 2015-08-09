#include <stdio.h>

int main()
{
	int counter = 0;	//variable declaration type and initialization of counter. Use: for loop.
	int sum = 0;		//variable declaration type and initialization of sum. Use: to sum up all the numbers that are divided by 3 or 5.
	
	for(counter = 0; counter < 1000; counter++)		//for loop. Use: to count from 0 to 1000.
	{
		if(counter % 3 == 0 || counter % 5 == 0)	//if statement. Use: to verify that the content of the variable 'counter' is divided by 3 or 5.
		{
			sum += counter;							//sum variable in action. Use: To summarize all numbers that are divided by 3 or 5.
			printf("%d\n", counter);				//printf function from stdio.h library. Existance: Optional. Use: Debuging.
		}
	}
	printf("%d\n", sum);							//printf function from stdio.h library. Use: the user can see the programs outcome.
}
