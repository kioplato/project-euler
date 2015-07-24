#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ginOrtho;
	int gin;
	int ginMiOrtho;
	int lastGin;
	int numb;
	int max;
	max = 0;
	
	for(int i = 999; i >= 0; i--)
	{
		//printf("metritis gia i: %d\n", i);
		for(int k = 999; k >= 0; k--)
		{
			//printf("metritis gia k: %d\n", k);
			ginOrtho = i * k;
			gin = ginOrtho;
			ginMiOrtho = 0;
			while(gin != 0)
			{
				numb = gin % 10;
				ginMiOrtho = ginMiOrtho * 10 + numb;
				gin = gin/10;
				//system("pause");
			}
			//printf("ginOrtho: %d \n", ginOrtho);
			//printf("ginMiOrtho: %d \n", ginMiOrtho);
			//system("pause");
			if(ginOrtho == ginMiOrtho)
			{
				printf("Mpike\n");
				//system("pause");
				printf("%d\n", ginOrtho);
				if(ginOrtho > max)
				{
					max = ginOrtho;
				}
			}
		}
	}
	printf("MaX:%d\n", max);
	return 1;
}
