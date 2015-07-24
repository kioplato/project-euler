#include <stdio.h>

int main()
{
	int counter = 0;
	int sum = 0;
	
	for(counter = 0; counter < 1000; counter++)
	{
		if(counter % 3 == 0 || counter % 5 == 0)
		{
			sum += counter;
			printf("%d\n", counter);
		}
	}
	printf("%d\n", sum);
}
