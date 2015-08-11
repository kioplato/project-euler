#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include <string.h>
#include <windows.h>                /* for Windows APIs */


/*
215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
What is the sum of the digits of the number 2^1000?
*/

int main()
{
	long long unsigned arithmos;
	arithmos = pow((2), 125);
	printf("%d", arithmos);
	
	int telefteosArithmos;
	long long unsigned apotelesma;
	apotelesma = 0;
	
	while(arithmos > 0)
	{
		telefteosArithmos = arithmos % 10;
		apotelesma = apotelesma + telefteosArithmos;
		arithmos = arithmos / 10;
	}
	
	printf("Apotelesma%d\n", apotelesma);
	
	return 0;
}
