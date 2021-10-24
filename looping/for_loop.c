/**********************************************************************************
filename    :   for_loop.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/06/29
description :   This program prints the first 10 roll numbers of my class using for statement.
**********************************************************************************/

#include <stdio.h>

int main()
{
 int r;
 printf("The roll numbers of first ten students are:");
 for (r = 1; r <= 10; r++)
 {
  printf("\nTHA077BCT0%02d", r);
 }
 return 0;
}