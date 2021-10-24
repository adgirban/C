/**********************************************************************************
filename    :   odd_even.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/06/20
description :   This program reads a number from computer and checks whether it is a odd or even number.
**********************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%i", &num);
    if (num % 2 == 0)
    {
        printf("\nIt is a even number.");
    }
    else
    {
        printf("\nIt is a odd number.");
    }
    return 0;
}
