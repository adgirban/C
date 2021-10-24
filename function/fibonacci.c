/**********************************************************************************
filename    :   fibonacci.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/07/14
description :   This program prints the fibonacci series upto any term using recursion.
**********************************************************************************/
#include <stdio.h>

int fibo(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibo(n - 1) + fibo(n - 2));
}

int main()
{
  int n, i, m = 0;
  printf("Enter upto how many terms of the fibonacci series you want to print :\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("%d ", fibo(m));
    m++;
  }
  return 0;
}