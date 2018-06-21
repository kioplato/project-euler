/*
Purpose: Solution to the 23rd problem @ Project Euler.
Author: Platon-Nikolaos Kiorpelidis
Date: 22/09/2016

Problem:
  A perfect number is a number for which the sum of its proper divisors is exactly equal to the number.
  For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

  A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.

  As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16,
  the smallest number that can be written as the sum of two abundant numbers is 24.
  By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers.
  However, this upper limit cannot be reduced any further by analysis
  even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.

  - Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.
*/

#include <iostream>

using namespace std;

int main(void)
{
  int32_t *abundant_numbers = NULL;    // the pointer which will point to the memory where the abundant numbers are stored.
  int32_t abundant_numbers_size = 0;   // the number that indicates how many memory slots we have allocated.
  for(size_t number = 1; number <= 28123; number++)  // iterates through all the numbers from 1 up to and including 28123.
  {
    cout << ">>>>> now checking for number:" << number << endl;
    int32_t sum_proper_divisors = 0;  // stores the sum of all the proper divisors for each number that is iterated.
    // iterates through all numbers from 1 up to number.
    for(size_t possible_proper_divisor = 1; possible_proper_divisor < number; possible_proper_divisor++)
    {
      if(number % possible_proper_divisor == 0)  // checks if possible_proper_divisor is a proper number's proper divisor.
      {
        cout << possible_proper_divisor  << " is a proper divisor for:" << number << endl;
      	sum_proper_divisors += possible_proper_divisor; // since it's a proper divisor, it is added to the sum.
      }
    }

    cout << "The sum of the proper divisors is: " << sum_proper_divisors << endl;

    if(sum_proper_divisors > number)  // checks if the number is an abundant number.
    {
      abundant_numbers = (int32_t*)realloc(abundant_numbers, sizeof(int32_t) * ++abundant_numbers_size);  // increases the size of the allocated memory.
      abundant_numbers[abundant_numbers_size - 1] = number;  // stores the new abundant number.
    }
  }

  cout << "-----Printing the abundant_numbers" << endl;
  getchar();                                                           // stops the procedure - to continue it press enter.
  for(size_t counter = 0; counter < abundant_numbers_size; counter++)  // iterates through all the numbers up to but not including abundant_numbers_size.
    cout << abundant_numbers[counter] << endl;                         // prints all the abundant numbers that are stored in the abundant_numbers array.

  int32_t sum_non_abundant_representable = 0;  // stores all the positive integers that cannot be represented as a sum of two abundant numbers.
  for(size_t posible_non_abundant_representable = 0; posible_non_abundant_representable < 28123; posible_non_abundant_representable++)
  {
    bool flag = false;
    for(size_t first_term_index = 0; first_term_index < abundant_numbers_size && flag != true; first_term_index++)
    {
      for(size_t second_term_index = first_term_index; second_term_index < abundant_numbers_size; second_term_index++)
      {
        if(abundant_numbers[first_term_index] + abundant_numbers[second_term_index] > 28123)
          break;

        if(abundant_numbers[first_term_index] + abundant_numbers[second_term_index] == posible_non_abundant_representable)
        {
          flag = true;
          break;
        }
      }
    }
    if(flag == false)
    {
      cout << posible_non_abundant_representable << " is not a abundant representable" << endl;
      sum_non_abundant_representable += posible_non_abundant_representable;
    }
  }

  printf("The sum of all the non abundant representable numbers is:%d", sum_non_abundant_representable);

  return EXIT_SUCCESS;
}
