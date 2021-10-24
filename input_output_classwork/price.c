#include <stdio.h>

int main()
{
 float one, two;

 printf("Enter price of item1 : ");
 scanf("%f", &one);

 printf("Enter price of item2 : ");
 scanf("%f", &two);

 float usd1 = one / 117.41;

 printf("The price of item1 in USD is $%.3f\n", usd1);
 printf("The price of item2 in NRS is Rs.%.3f", two);

 return 0;
}