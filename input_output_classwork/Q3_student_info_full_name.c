#include <stdio.h>
#include <conio.h>

/*Q.3 Write a C program using formatted and unformatted I/O for 2nd 
problem, name is full name in this case.*/

int main()
{
 char name[10], gen, roll[15];
 int age;
 float weight;

 puts("Enter your name :");
 gets(name);

 fseek(stdin, 0, SEEK_END);

 puts("Enter your age :");
 scanf("%i", &age);

 fseek(stdin, 0, SEEK_END);

 puts("Enter your weight :");
 scanf("%f", &weight);

 fseek(stdin, 0, SEEK_END);

 puts("Roll No :");
 gets(roll);

 fseek(stdin, 0, SEEK_END);

 puts("Gender(M/F/O) :");
 scanf("%c", &gen);

 printf("\nName : %s\n", name);
 printf("Gender : %c\n", gen);
 printf("Age : %i\n", age);
 printf("Weight : %.3f\n", weight);
 printf("Roll No : %s\n", roll);

 return 0;
}