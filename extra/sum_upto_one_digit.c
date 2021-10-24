#include <stdio.h>

int add(int a)
{
 int dig, sum = 0;
 if (a <= 9)
 {
  return a;
 }
 else
 {
  while (a != 0)
  {
   dig = a % 10;
   sum += dig;
   a = a / 10;
  }
  return (add(sum));
 }
}

int main()
{
 int num, total;
 printf("Enter any number : ");
 scanf("%d", &num);
 total = add(num);
 printf("The sum is : %d", total);
 return 0;
}