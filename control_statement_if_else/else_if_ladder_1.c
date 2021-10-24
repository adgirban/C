/**********************************************************************************
filename    :   else_if_ladder_1.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/06/20
description :   This program reads a number from computer and checks if the number is less that 10 or between 10 and 20 or between 20 and 30 or between 30 and 40 or greater than 40.
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
    else if (num > 10 && num < 20)
    {
        printf("\nThe number is between 10 and 20.");
    }
    else if (num > 20 && num < 30)
    {
        printf("\nThe number is between 20 and 30");
    }
    else if (num > 30 && num < 40)
    {
        printf("\nThe number is between 30 and 40");
    }
    else
    {
        printf("\nThe number is greater than 40");
    }
    return 0;
}
