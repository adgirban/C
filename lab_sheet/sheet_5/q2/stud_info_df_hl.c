//Following code is written and compiled in VS Code IDE
#include <stdio.h>
#include <stdlib.h>

struct stud
{
 char name[20];
 char roll[15];
 char address[20];
 int age;
 int phy;
 int C;
 int math;
 float avg;
};
typedef struct stud stud;
int main()
{
 int i;
 stud s[3];

 for (i = 0; i < 3; i++)
 {
  fflush(stdin);
  printf("Enter Name of student %d\n", i + 1);
  gets(s[i].name);
  printf("Enter Roll No of student %d\n", i + 1);
  gets(s[i].roll);
  printf("Enter Address of student %d\n", i + 1);
  gets(s[i].address);
  printf("Enter age of student %d\n", i + 1);
  scanf("%d", &s[i].age);
  printf("Enter marks in Physics of student %d\n", i + 1);
  scanf("%d", &s[i].phy);
  printf("Enter marks in C of student %d\n", i + 1);
  scanf("%d", &s[i].C);
  printf("Enter marks in Maths of student %d\n", i + 1);
  scanf("%d", &s[i].math);
  s[i].avg = (float)(s[i].phy + s[i].C + s[i].math) / 3;
  printf("\n");
 }

 FILE *fptr1, *fptr2;
 char c;

 fptr1 = fopen("std.txt", "w");
 for (i = 0; i < 3; i++)
 {
  fprintf(fptr1, "Student %d:\n", i + 1);
  fprintf(fptr1, "Name : %s\t\tRoll : %s\n", s[i].name, s[i].roll);
  fprintf(fptr1, "Address : %s\t\tAge : %d\n", s[i].address, s[i].age);
  fprintf(fptr1, "Physics : %d\t\tC : %d\n", s[i].phy, s[i].C);
  fprintf(fptr1, "Maths : %d\t\tAverage Marks : %.2f\n", s[i].math, s[i].avg);
  fprintf(fptr1, "\n");
 }
 fclose(fptr1);

 fptr2 = fopen("std.txt", "r");
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