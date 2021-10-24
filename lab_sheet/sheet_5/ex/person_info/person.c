#include <stdio.h>
#include <stdlib.h>

int main()
{
 char name[30];
 int age;
 int height;

 FILE *fptr1;
 fptr1 = fopen("person.txt", "w");

 printf("Enter name : ");
 gets(name);
 printf("Enter age : ");
 scanf("%d", &age);
 printf("Enter height (in cms) : ");
 scanf("%d", &height);

 fprintf(fptr1, "Name : %s\n", name);
 fprintf(fptr1, "Age : %d\n", age);
 fprintf(fptr1, "Height : %d cms\n", height);

 fclose(fptr1);

 fptr1 = fopen("person.txt", "r");

 if (fptr1 == NULL)
 {
  printf("FILE CANNOT BE OPENED\n");
 }

 char buf[100];
 printf("\n");
 while (fscanf(fptr1, "%s", buf) != EOF)
 {
  printf("%s ", buf);
 }

 fclose(fptr1);
 return 0;
}