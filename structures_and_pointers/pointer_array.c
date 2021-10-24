/**********************************************************************************
filename    :   pointer_array.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/07/27
description :   This program prints the prices of 10 items using pointers.
**********************************************************************************/
#include <stdio.h>

int main()
{
 float price[10];
 int i;
 float *p = price;
 printf("Enter the price of items :\n");

 for (i = 0; i < 10; i++)
 {
  printf("Item %d : ", i + 1);
  scanf("%f", p + i);
 }

 printf("\nThe price of items are as follows:\n");

 for (i = 0; i < 10; i++)
 {
  printf("Item %d : ", i + 1);
  printf("Rs.%.2f\n", *(p + i));
 }
 return 0;
}