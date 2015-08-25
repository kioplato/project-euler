#include <stdio.h>

int main()
{
	int x1;
	int x2;
	int x3;
	int sum;
	int sumEven;
	
	x1 = 1;
	x2 = 2;
	x3 = 0;
	sum = 0;
	sumEven = 2;
	
	while(sum <= 4000000)
	{
		if(x3 < x2 && x3 < x1)	//because i dont want to lose my progress with a wrong addition.
		{
			x3 = x1 + x2;
			sum = x3;
			if(x3 > 4000000)
			{
				break;
			}
			if(x3 % 2 == 0)
			{
				sumEven = sumEven + x3;
			}
		}
		else if(x2 < x3 && x2 < x1)	//because i dont want to lose my progress with a wrong addition.
		{
			x2 = x1 + x3;
			sum = x2;
			if(x2 > 4000000)
			{
				break;
			}
			if(x2 % 2 == 0)
			{
				sumEven = sumEven + x2;
			}
		}
		else if(x1 < x2 && x1 < x3)	//because i dont want to lose my progress with a wrong addition.
		{
			x1 = x2 + x3;
			sum = x1;
			if(x1 > 4000000)
			{
				break;
			}
			if(x1 % 2 == 0)
			{
				sumEven = sumEven + x1;
			}
		}
	}
	printf("%d\n", sumEven);
}
