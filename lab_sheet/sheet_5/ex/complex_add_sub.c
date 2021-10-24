#include <stdio.h>

struct complex
{
 float real;
 float imaginary;
};

typedef struct complex complex;

int main()
{
 complex num1, num2, sum, diff;
 printf("Enter real and imaginary part of first complex number\n");
 scanf("%f%f", &num1.real, &num1.imaginary);
 printf("Enter real and imaginary part of second complex number\n");
 scanf("%f%f", &num2.real, &num2.imaginary);

 sum.real = num1.real + num2.real;
 sum.imaginary = num1.imaginary + num2.imaginary;
 diff.real = num1.real - num2.real;
 diff.imaginary = num1.imaginary - num2.imaginary;

 printf("\nSum = %.2f + i %.2f", sum.real, sum.imaginary);
 printf("\nDifference = %.2f + i %.2f", diff.real, diff.imaginary);

 return 0;
}