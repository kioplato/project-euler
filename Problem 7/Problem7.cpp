#include <stdio.h>

//What is the 10 001st prime number?

int CheckPrime(int i)		//function CheckPrime. Use: returns if a number is prime or not.
{
	int z;					//variable declaration type of z. Use: to count from z until i.
	int divided = 0;		//variable declaration type of divided. Use: to count the time i is divided.
	for(z = 1; z<= i; z++)	//for loop. Use: counts from 1 to i.
	{
		if(i % z == 0)		//if statement. Use: to check if i is divided by z.
		{
			divided++;		//variable divided in action. Use: increases its value by 1.
		}
		if(divided == 3)
		{
			break;
		}
	}
	if(divided == 2)		//if statement. Use: to check if i is prime.
	{
		return 1;			//return. Use: returns 1 to the caller.
	}
	else					//else. Use: default choice.
	{
		return 0;			//return. Use: returns 0 to the caller.
	}
}

int main()
{
	int i = 2;				//variable declaration type and initialization of i. Use: 2 is the first number. we want to start the calcuation from 2.
	int k = 0;				//variable declaration type and initialization of k. Use: we want to start counting from 0.
	int isPrime;			//variable declaration type of isPrime. Use: to accept the return value from function check prime
	while(k != 10001)		//while loop. Used: to stop the exexution when k == 10001.
	{
		isPrime = 0;		//variable initialization of isPrime. Use: reseting the value for good practice.
		isPrime = CheckPrime(i);	//variable isPrime in action. Use: accepts the return value from CheckPrime function.
		if(isPrime == 1)	//if statement. Use: to check if isPrime is 1;
		{
			k++;			//k variable in action. Use: to increase its value by 1 so we can proceed to the next calculation.
		}
		i++;				//i variable in action. Use: to increase its value by 1 so we can know the last number.
	}
	printf("%d\n", i-1);	//printf function from stdio.h library. Use: to let the user know the outcome of the calculation.
	return 0;
}
