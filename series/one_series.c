//1+11+111+1111+...
#include <stdio.h>
#include <math.h>

int main()
{
 int i, n, sum = 0, j = 1;
 printf("Enter n: ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++)
 {
  sum += j;
  j = (j * 10) + 1;
 }
 printf("Sum = %d", sum);
 return 0;
}