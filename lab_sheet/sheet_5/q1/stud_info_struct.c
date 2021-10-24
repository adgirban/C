#include <stdio.h>

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

 for (i = 0; i < 3; i++)
 {
  printf("Student %d:\n", i + 1);
  printf("Name : %s\t\tRoll : %s\n", s[i].name, s[i].roll);
  printf("Address : %s\t\tAge : %d\n", s[i].address, s[i].age);
  printf("Physics : %d\t\tC : %d\n", s[i].phy, s[i].C);
  printf("Maths : %d\t\tAverage Marks : %.2f\n", s[i].math, s[i].avg);
  printf("\n");
 }
 return 0;
}
