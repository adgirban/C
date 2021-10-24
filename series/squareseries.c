//1^2 - 2^2 + 3^2 - 4^2 + (-1)^n+1 * n^2
#include <stdio.h>

int series(int);
int power(int, int);

int main()
{
 int n, sum;
 printf("Enter the value of n: ");
 scanf("%d", &n);
 sum = series(n);
 printf("The sum = %d", sum);
 return 0;
}

int series(int n)
{
 if (n == 1)
 {
  return n;
 }
 else
 {
  return (power(-1, n + 1) * n * n + series(n - 1));
 }
}

int power(int n, int r)
{
 int i, p = 1;
 for (i = 0; i < r; i++)
 {
  p = p * n;
 }
 return p;
}