#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ginOrtho;	//variable declaration type of ginOrtho. Use: to store the number as big endian.
	int gin;		//variable declaration type of gin. Use: to store the product.
	int ginMiOrtho;	//variable declaration type of ginMiOrtho. Use: to store the number as little endian.
	int lastGin;	//variable declaration type of lastGin. Use: to store the last product.
	int numb;		//variable declaration type of lastGin. Use: to store the last digit from the gin.
	int max;		//variable declaration type of max. Use: to store the maximum palindrome product.
	max = 0;
	
	for(int i = 999; i >= 0; i--)						//for loop. Use: to count from 999 to 0.
	{
		for(int k = 999; k >= 0; k--)					//for loop. Use to count from 999 to 0.
		{
			ginOrtho = i * k;							//ginOrtho variable in action. Use: to store the product of i and k.
			gin = ginOrtho;								//gin variable in action. Use: to save the ginOrtho variable content.
			ginMiOrtho = 0;								//ginMiOrtho variable in action. Use: to start calculating from 0.
			while(gin != 0)								//while loop. Use: to stop the loop when gin == 0.
			{
				numb = gin % 10;						//numb variable in action. Use: to fetch the last digit from gin variable.
				ginMiOrtho = ginMiOrtho * 10 + numb;	//ginMiOrtho variable in action. Use: to save the digit we fetched before and make the number little endian.
				gin = gin/10;							//gin variable in action. Use: to kick out the last digit we fetched.
			}
			if(ginOrtho == ginMiOrtho)					//if statement. Use: to check if the number is the same when we read it as big and little endian.
			{
				printf("Mpike\n");						//printf function from stdio.h library. Use: debugging.
				printf("%d\n", ginOrtho);				//printf function from stdio.h library. Use: debugging.
				if(ginOrtho > max)						//if statement. Use: to check if ginOrtho is greater than max.
				{
					max = ginOrtho;						//max variable in action. Use: to save the new maximum.
				}
			}
		}
	}
	printf("MaX:%d\n", max);							//printf function from stdio.h library. Use: to let the user know the outcome of the calculation.
	return 1;
}
