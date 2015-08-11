#include <stdio.h>

int main()
{
	int x1;			//variable declaration type of x1. Use: to store the progress of fibonacci sequence.
	int x2;			//variable declaration type of x2. Use: to store the progress of fibonacci sequence.
	int x3;			//variable declaration type of x3. Use: to store the progress of fibonacci sequence.
	int sum;		//variable declaration type of sum. Use: to store the sum of x1 x2 and x3.
	int sumEven;	//variable declaration type of sum. Use: to store the sum of the Even sum variables.
	
	x1 = 1;			//variable initialization of x1.
	x2 = 2;			//variable initialization of x2.
	x3 = 0;			//variable initialization of x3.
	sum = 0;		//variable initialization of sum.
	sumEven = 2;	//variable initialization of sumEven.
	
	while(sum <= 4000000)				//while loop. Use: to check if sum is above 4.000.000.
	{
		if(x3 < x2 && x3 < x1)			//if statement. Use: to check which is the smallest variable so we don't mess up the progress we made.
		{
			x3 = x1 + x2;				//x3 variable in action. Use: to sum x1 and x2 into x3.
			sum = x3;					//sum variable in action. Use: to store x3.
			if(x3 > 4000000)			//if statement. Use: to check if sum/x3 is > 4.000.000.
			{
				break;					//use of break. Use: to stop the loop.
			}
			if(x3 % 2 == 0)				//if statement. Use: to check if x3 is even number.
			{
				sumEven = sumEven + x3;	//sumEven variable in action. Use: to sum up all even fibonacci numbers.
			}
		}
		else if(x2 < x3 && x2 < x1)		//same as before but for x2.
		{
			x2 = x1 + x3;				//same as before but for x1 and x3.
			sum = x2;					//same as before but for x2.
			if(x2 > 4000000)			//same as before but for x2.
			{
				break;					//same as before.
			}
			if(x2 % 2 == 0)				//same as before but for x2.
			{
				sumEven = sumEven + x2;	//same as before.
			}
		}
		else if(x1 < x2 && x1 < x3)		//same as before but fore x1.
		{
			x1 = x2 + x3;				//same as before but for x2 and x3.
			sum = x1;					//same as before but for x1.
			if(x1 > 4000000)			//same as before but for x1.
			{
				break;					//same as before.
			}
			if(x1 % 2 == 0)				//same as before but for x1.
			{
				sumEven = sumEven + x1;	//same as before.
			}
		}
	}
	printf("%d\n", sumEven);			//printf function of stdio.h library. Use: to let the user know the output of the calcualtion.
}
