#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int straightProduct;
	int product;
	int nonStraightProduct;
	int number;
	int max;
	max = 0;
	
	for(int i = 999; i >= 0; i--)		//I do countdown from 999 because we need the LARGEST palindrome product.
	{
		for(int k = 999; k >= 0; k--)
		{
			straightProduct = i * k;
			product = straightProduct;
			nonStraightProduct = 0;
			while(product != 0)
			{
				number = product % 10;		//I take the last digit of the product.
				nonStraightProduct = nonStraightProduct * 10 + number;		//I add it as the first digit of the nonStraightProduct.
				product = product/10;		//I remove the last digit, because I don't need it anymore.
			}
			if(straightProduct == nonStraightProduct)
			{
				if(straightProduct > max)
				{
					max = straightProduct;
				}
			}
		}
	}
	printf("MaX:%d\n", max);
	return 1;
}
