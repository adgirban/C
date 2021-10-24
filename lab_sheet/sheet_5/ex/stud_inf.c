#include <stdio.h>

struct stud
{
 char name[25];
 char address[40];
 char roll[15];
 int age;
 int avg;
};

typedef struct stud stud;

void display(stud s[])
{
 int i;
 for (i = 0; i < 12; i++)
 {
  printf("Student %d\n", i + 1);
  printf("Name : %s\t\tAddress : %s\t\t", s[i].name, s[i].address);
  printf("Roll : %s\t\tAge : %d\t\tAverage Marks : %d\n", s[i].roll, s[i].age, s[i].avg);
 }
}

int main()
{
 stud s[12];
 int i;

 for (i = 0; i < 12; i++)
 {
  fflush(stdin);
  printf("Enter the Name of student %d\n", i + 1);
  gets(s[i].name);
  printf("Enter the Address of student %d\n", i + 1);
  gets(s[i].address);
  printf("Enter the Roll No of student %d\n", i + 1);
  gets(s[i].roll);
  printf("Enter the Age of student %d\n", i + 1);
  scanf("%d", &s[i].age);
  printf("Enter the Average Marks of student %d\n", i + 1);
  scanf("%d", &s[i].avg);
  printf("\n");
 }

 display(s);
 return 0;
}