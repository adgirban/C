/**********************************************************************************
filename    :   palindrome.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/07/14
description :   This program checks whether a input number is palindrome or not.
**********************************************************************************/
#include <stdio.h>

void palin(int n)
{
 int temp, rem, rev = 0;
 temp = n;
 while (n > 0)
 {
  rem = n % 10;
  rev = (rev * 10) + rem;
  n = n / 10;
 }
 if (rev == temp)
 {
  printf("The number is a palindrome");
 }
 else
 {
  printf("The number is not a palindrome");
 }
}

int main()
{
 int n;
 printf("Enter a number with at least two digits: ");
 scanf("%d", &n);
 palin(n);
 return 0;
}