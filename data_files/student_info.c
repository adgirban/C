/*******************************************************************************************************************************************************
filename    :   student_info.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/07/27
description :   This program stores information of a student taken from keyboard in a file and later read that file to show content of it on the screen.
*******************************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
 char name[20];
 char add[15];
 char sub[5];
 int roll, year;
 long long int phone;

 printf("Name : ");
 gets(name);
 printf("Roll No : ");
 scanf("%d", &roll);
 fflush(stdin);
 printf("Subject : ");
 scanf("%s", sub);
 printf("Year : ");
 scanf("%d", &year);
 printf("Address : ");
 scanf("%s", add);
 printf("Phone : ");
 scanf("%lld", &phone);

 FILE *fptr1, *fptr2;
 char c;
 fptr1 = fopen("studentinfo.txt", "w");

 fprintf(fptr1, "Name : %s\n", name);
 fprintf(fptr1, "Roll No : %d\n", roll);
 fprintf(fptr1, "Subject : %s\n", sub);
 fprintf(fptr1, "Year : %d\n", year);
 fprintf(fptr1, "Address : %s\n", add);
 fprintf(fptr1, "Phone : %lld\n", phone);

 fclose(fptr1);

 fptr2 = fopen("studentinfo.txt", "r");

 if (fptr1 == NULL)
 {
  printf("THE FILE CANNOT BE OPENED\n");
  exit(0);
 }
 printf("\n");
 while ((c = fgetc(fptr1)) != EOF)
 {
  printf("%c", c);
 }

 fclose(fptr2);
 return 0;
}