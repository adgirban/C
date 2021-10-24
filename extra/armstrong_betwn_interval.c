#include <math.h>
#include <stdio.h>
int main()
{
 int low, high, number, temp, rem, count = 0;
 double result = 0.0;
 printf("Enter two numbers(intervals): ");
 scanf("%d %d", &low, &high);
 printf("Armstrong numbers between %d and %d are: ", low, high);

 // swap numbers if high < low
 if (high < low)
 {
  high += low;
  low = high - low;
  high -= low;
 }

 // iterate number from (low + 1) to (high - 1)
 // In each iteration, check if number is Armstrong
 for (number = low + 1; number < high; ++number)
 {
  temp = number;

  // number of digits calculation
  while (temp != 0)
  {
   temp /= 10;
   ++count;
  }

  temp = number;

  // result contains sum of nth power of individual digits
  while (temp != 0)
  {
   rem = temp % 10;
   result += pow(rem, count);
   temp /= 10;
  }

  // check if number is equal to the sum of nth power of individual digits
  if ((int)result == number)
  {
   printf("%d ", number);
  }

  // resetting the values
  count = 0;
  result = 0;
 }

 return 0;
}
