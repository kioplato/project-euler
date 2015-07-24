#include <stdio.h>
#include <stdlib.h>

//A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.

int main()
{
	int mines[12];
	mines[0] = 31;
	mines[1] = 28;
	mines[2] = 31;
	mines[3] = 30;
	mines[4] = 31;
	mines[5] = 30;
	mines[6] = 31;
	mines[7] = 31;
	mines[8] = 30;
	mines[9] = 31;
	mines[10] = 30;
	mines[11] = 31;
	
	int year;
	int days = 0;
	int month = 0;
	int fores = 0;
	
	for(month = 0; month < 12; month++)
	{
		days += mines[month];
	}
	days = days % 7;
	if(days == 0)
	{
		fores++;
	}
	printf("DAYS:%d\n",days);
	for(year = 1901; year <= 2000; year++)
	{
		for(month = 0; month < 12; month++)
		{
			days = (days % 7);
			//printf("MERES:%d\n",days);
			if(days == 6)
			{
				fores++;
				printf("MINAS:%d XRONIA:%d MERES:%d\n", month, year, days);
			}
			if(month == 1 && year % 4 == 0 && year % 400 == 0 && year % 100 != 0)
			{
				days += mines[month] + 1;
			}
			else
			{
				days += mines[month];
			}
		}
	}
	printf("Apotelesma:%d\n", fores);
	return 1;
}
