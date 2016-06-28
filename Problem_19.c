#include <stdio.h>
#include <stdlib.h>

//A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.

int main()
{
	int months[12];
	months[0] = 31;
	months[1] = 28;
	months[2] = 31;
	months[3] = 30;
	months[4] = 31;
	months[5] = 30;
	months[6] = 31;
	months[7] = 31;
	months[8] = 30;
	months[9] = 31;
	months[10] = 30;
	months[11] = 31;
	
	int year;
	int days = 0;
	int month = 0;
	int times = 0;
	
	for(month = 0; month < 12; month++)
	{
		days += mines[month];
	}
	days = days % 7;
	if(days == 0)
	{
		times++;
	}
	for(year = 1901; year <= 2000; year++)
	{
		for(month = 0; month < 12; month++)
		{
			days = (days % 7);
			if(days == 6)
			{
				times++;
				printf("Month: %d Year: %d Day: %d\n", month, year, days);
			}
			if(month == 1 && year % 4 == 0 && year % 400 == 0 && year % 100 != 0)
			{
				days += months[month] + 1;
			}
			else
			{
				days += months[month];
			}
		}
	}
	printf("Result: %d\n", times);
	return 1;
}
