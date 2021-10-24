/**********************************************************************************
filename    :   while_loop.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/06/29
description :   This program prints the last 10 roll numbers of my class which are not greater than 40 using while statement.
**********************************************************************************/

#include <stdio.h>

int main()
{
 int i = 1;
 while (i <= 10)
 {
  static int r = 39;
  if (r > 40)
  {
   break;
  }
  printf("\nTHA077BCT0%02d", r);
  i++;
  r++;
 }
 return 0;
}