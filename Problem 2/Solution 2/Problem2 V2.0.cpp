#include <stdio.h>

int main()
{
	int x1;
	int x2;
	int x3;
	int sumEven;

	x1 = 1;
	x2 = 2;	
	x3 = 0;	
	sumEven = 2;	//initialization of sumEven with 2 because we don't calculate it inside the while().
	
	while(x2 + x1 <= 4000000)
	{
		x3 = x2 + x1;
		x1 = x2;
		x2 = x3;
		if (x3 % 2 == 0)
		{
			sumEven = sumEven + x3;
		}
	}
	printf("%d\n", sumEven);
}
