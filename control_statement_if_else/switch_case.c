/**********************************************************************************
filename    :   switch_case.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/06/20
description :   This program reads a number from computer and checks whether it is 1 or 2 or 3 or 4 or other number.
**********************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("\nThe number you entered is %d", num);
        break;
    case 2:
        printf("\nThe number you entered is %d", num);
        break;
    case 3:
        printf("\nThe number you entered is %d", num);
        break;
    case 4:
        printf("\nThe number you entered is %d", num);
        break;
    default:
        printf("\nThe number you entered is other than 1,2,3,4");
        break;
    }
}
