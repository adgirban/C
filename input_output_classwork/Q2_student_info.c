#include <stdio.h>

int main()
{
 char name[10], gen, roll[15];
 int age;
 float weight;

 printf("Enter your name :");
 scanf("%s", name);

 fseek(stdin, 0, SEEK_END);

 printf("Enter your age :");
 scanf("%d", &age);

 fseek(stdin, 0, SEEK_END);

 printf("Enter your weight :");
 scanf("%f", &weight);

 fseek(stdin, 0, SEEK_END);

 printf("Roll No :");
 scanf("%s", roll);

 fseek(stdin, 0, SEEK_END);

 printf("Gender(M/F/O) :");
 scanf("%c", &gen);

 printf("\nName : %s\n", name);
 printf("Gender : %c\n", gen);
 printf("Age : %i\n", age);
 printf("Weight : %.3f\n", weight);
 printf("Roll No : %s\n", roll);

 return 0;
}