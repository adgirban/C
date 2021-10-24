/**********************************************************************************
filename    :   temperature.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/07/14
description :   This program takes temperature input from the user in centigrade and converts and displays it in degree farhenheit in c.
**********************************************************************************/
#include <stdio.h>

float farhen(float c)
{
 float far;
 far = 1.8 * c;
 return far + 32;
}

int main()
{
 float centi;
 printf("Enter temperature in degree centigrade: ");
 scanf("%f", &centi);
 printf("The temperature in degree farhenheit is %.3f", farhen(centi));
 return 0;
}