/**********************************************************************************
filename    :   swap_num.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/07/14
description :   This program takes two numbers and swaps their values using call by reference.
**********************************************************************************/
#include <stdio.h>

void swap(int *a, int *b)
{
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
 printf("The values after swapping are a = %d and b = %d", *a, *b);
}

int main()
{
 int a, b;
 printf("Input two numbers\n");
 scanf("%d %d", &a, &b);
 swap(&a, &b);
 return 0;
}