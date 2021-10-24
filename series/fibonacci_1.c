#include <stdio.h>

int fibo()
{
 static int a = 0, b = 1, c = 0;
 c = a + b;
 a = b;
 b = c;
 return c;
}

int main()
{
 int num, i;
 printf("Enter how many numbers you want in the series :");
 scanf("%d", &num);
 printf("%d ", 0);
 for (i = 1; i < num; i++)
 {
  printf("%d ", fibo(num));
 }
 return 0;
}