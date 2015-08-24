#include <stdio.h>
#include <stdlib.h>

int main()
{
	int unitsWithoutTen = 3 + 3 + 5 + 4 + 4 + 3 + 5 + 5 + 4;
	int dozens = 6 + 6 + 5 + 5 + 5 + 7 + 6 + 6;
	int hundreds = 10 + 10 + 12 + 11 + 11 + 10 + 12 + 12 + 11;
	int thousands = 11;
	int ands = 3;
	int elevteen = 3 + 6 + 6 + 8 + 8 + 7 + 7 + 9 + 8 + 8;
	
	int sum = 0;
	int operandOne = 0;
	
	//from 1 till 20.
	operandOne += unitsWithoutTen;
	operandOne += elevteen;
	operandOne += 6;
	
	int operandTwo = 0;
	//from 1 till 99.
	operandTwo += (dozens * 10) + (8 * unitsWithoutTen) - 6;
	
	int operandThree = 0;
	//from 100 till 999
	operandThree += ((operandOne + operandTwo) * 10) + (9 * 99 * ands) + (hundreds * 100);
	
	printf("Result: %d\n", operandThree + 11);
	printf("%d\n", operandThree);
	return 0;
}
