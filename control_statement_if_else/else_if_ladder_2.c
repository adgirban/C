/**********************************************************************************
filename    :   else_if_ladder_2.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/06/20
description :   This program reads a number from computer and checks if the number is less that 10 or less than 20 or less than 30 or less than 40.
**********************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%i", &num);

    if (num < 10)
    {
        printf("\nThe number is less than 10");
    }
    if (num < 20)
    {
        printf("\nThe number is less than 20.");
    }
    if (num < 30)
    {
        printf("\nThe number is less than 30");
    }
    if (num < 40)
    {
        printf("\nThe number is less than 40");
    }
    else{
        printf("\nThe number is greater than 40");
    }
    return 0;
}
