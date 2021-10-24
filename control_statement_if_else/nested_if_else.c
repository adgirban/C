/**********************************************************************************
filename    :   nested_if_else.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/06/20
description :   This program reads a number from computer and checks if the number is divisible by 10 or not. If divisible by 10,checks if it is multiple of 6 or not and also checks if it is multiple of 4 or not in case of not divisible by 10.
**********************************************************************************/
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number:");
    scanf("%i", &num);

    if (num % 10 == 0)
    {
        printf("\nThe number %i is divisible by 10", num);

        if (num % 6 == 0)
        {
            printf("\nThe number %i is also a multiple of 6", num);
        }
        else
        {
            printf("\nThe number %i is not a multiple of 6", num);
        }
    }
    else if (num % 4 == 0)
    {
        printf("\nThe number %i is multiple of 4", num);
    }
    else
    {
        printf("\nThe number is neither divisible by 10 nor a multiple of 4");
    }
    return 0;
}
