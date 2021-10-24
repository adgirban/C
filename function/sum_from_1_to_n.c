/**********************************************************************************
filename    :   sum_from_1_to_n.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/07/14
description :   This program sums the number from 1 to n where n is any number provided by the user.
**********************************************************************************/
#include <stdio.h>

int sum(int n)
{
 int r;
 if (n == 1)
 {
  return 1;
 }
 else
 {
  r = n + sum(n - 1);
  return r;
 }
}

int main()
{
 int n, s;
 printf("Enter upto which number you want to sum (the value of n)\n");
 scanf("%d", &n);
 s = sum(n);
 printf("The sum of numbers from 1 to %d is = %d ", n, s);
 return 0;
}