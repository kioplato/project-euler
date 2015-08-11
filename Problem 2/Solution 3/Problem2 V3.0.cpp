#include <stdio.h>

int main()
{
	int x1;
	int x2;
	int sumEven;

	x1 = 1;
	x2 = 2;	
	sumEven = 2;	//initialization of sumEven with 2 because we don't calculate it inside the while().
	
	while(x2 + x1 <= 4000000)
	{
		x2 = x1 + x2;
		x1 = x2 - x1;	//so we won't lose our progress we've made.
		if (x2 % 2 == 0)
		{
			sumEven = sumEven + x2;
		}
	}
	printf("%d\n", sumEven);
}
