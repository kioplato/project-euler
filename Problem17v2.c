#include <stdio.h>
#include <stdlib.h>

int main()
{
	int monadesXorisDeka = 3 + 3 + 5 + 4 + 4 + 3 + 5 + 5 + 4;
	int dekades = 6 + 6 + 5 + 5 + 5 + 7 + 6 + 6;
	int ekatodades = 10 + 10 + 12 + 11 + 11 + 10 + 12 + 12 + 11;
	int xiliades = 11;
	int kai = 3;
	int endenia = 3 + 6 + 6 + 8 + 8 + 7 + 7 + 9 + 8 + 8;
	
	int athrisma = 0;
	int telesteosENA = 0;
	
	//Apo to 1 mexri kai to 20.
	telesteosENA += monadesXorisDeka;
	telesteosENA += endenia;
	telesteosENA += 6;
	
	int telesteosDIO = 0;
	//Apo to 21 mexri kai to 99.
	telesteosDIO += (dekades * 10) + (8 * monadesXorisDeka) - 6;
	
	int telesteosTRIA = 0;
	//Apo to 100 999
	telesteosTRIA += ((telesteosENA + telesteosDIO) * 10) + (9 * 99 * kai) + (ekatodades * 100);
	
	printf("Apotelesma:%d\n", telesteosTRIA + 11);
	printf("%d\n",telesteosTRIA);
	return 0;
}
