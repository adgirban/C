/**********************************************************************************
filename    :   pointer_struct_array.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/07/27
description :   This program stores the information of 10 students using pointer of structure array.
**********************************************************************************/
#include <stdio.h>

struct stud
{
 char name[20];
 int age;
};

int main()
{
 int i;
 struct stud s[10], *p = s;
 printf("Enter the name and age of students :\n");

 for (i = 0; i < 10; i++)
 {
  fflush(stdin);
  printf("Student %d ", i + 1);
  printf("Name : ");
  gets((p + i)->name);
  printf("Age : ");
  scanf("%d", &s[i].age);
 }

 for (i = 0; i < 10; i++)
 {
  printf("\nStudent %d \n", i + 1);
  printf("\tName : %s", (p + i)->name);
  printf("\n\tAge : %d", (p + i)->age);
 }
 return 0;
}
