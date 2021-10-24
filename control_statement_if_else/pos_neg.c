/**********************************************************************************
filename    :   pos_neg.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/06/20
description :   This program reads a number from computer and checks whether it is a positive or negative number.
**********************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a positive or negative number:");
    scanf("%i", &num);
    if (num > 0)
    {
        printf("\n It is a positive number.");
    }
    else if (num < 0)
    {
        printf("\n It is a negative number.");
    }
    else
    {
        printf("\n The number is 0.");
    }
    return 0;
}
