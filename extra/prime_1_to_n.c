#include <stdio.h>

int prime(int n)
{
 int i, c = 0;
 for (i = 1; i <= n; i++)
 {
  if (n % i == 0)
  {
   c++;
  }
 }
 return c;
}

int main()
{
 int n, c;
 printf("Enter a number: ");
 scanf("%d", &n);
 c = prime(n);

 if (c == 2)
 {
  printf("It is prime\n");
 }
 else
 {
  printf("It is not prime\n");
 }

 printf("Prime numbers from 1 to %d are:\n", n);
 for (int i = 1; i <= n; i++)
 {
  c = prime(i);
  if (c == 2)
  {
   printf("%d ", i);
  }
 }
 return 0;
}