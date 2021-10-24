/**********************************************************************************
filename    :   armstrong.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/07/14
description :   This program checks whether a number is armstrong number or not using functions.
**********************************************************************************/
#include <stdio.h>
int power(int, int);

void armstrong(int n)
{
  int sum = 0, t, remainder, digits = 0;

  t = n;
  // Count number of digits
  while (t != 0)
  {
    digits++;
    t = t / 10;
  }

  t = n;

  while (t != 0)
  {
    remainder = t % 10;
    sum = sum + power(remainder, digits);
    t = t / 10;
  }

  if (n == sum)
    printf("%d is an Armstrong number.\n", n);
  else
    printf("%d isn't an Armstrong number.\n", n);
}

int main()
{
  int n;
  printf("Enter any multi digit or single digit number : ");
  scanf("%d", &n);
  armstrong(n);
  return 0;
}

int power(int n, int r)
{
  int i, p = 1;

  for (i = 1; i <= r; i++)
  {
    p = p * n;
  }

  return p;
}
