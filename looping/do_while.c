/**********************************************************************************
filename    :   do_while.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/06/29
description :   This program prints the first 20 odd roll numbers of my class using do while statement.
**********************************************************************************/

#include <stdio.h>

int main()
{
 int i = 0;
 do
 {
  i++;
  if (i % 2 == 0)
  {
   continue;
  }
  printf("\nTHA077BCT0%02d", i);
 } while (i < 20);
 return 0;
}