/**********************************************************************************
filename    :   prime_number.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/07/14
description :   This program checks whether a number is prime or not using functions.
**********************************************************************************/
#include <stdio.h>

int prime(int n)
{
 int i, c;
 c = 0;
 for (i = 1; i <= n; i++)
 {
  if (n % i == 0)
  {
   c++;
  }
 }
 if (c == 2)
 {
  printf("The number is prime");
 }
 else
 {
  printf("The number is not prime");
 }
}

int main()
{
 int a;
 printf("Enter any natural number: ");
 scanf("%d", &a);
 prime(a);
}