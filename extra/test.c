#include <stdio.h>

int main()
{
 int A[10][10], B[10], i, j, r, c, max;

 printf("Enter rows: ");
 scanf("%d", &r);
 printf("Enter columns: ");
 scanf("%d", &c);

 for (i = 0; i < r; i++)
 {
  for (j = 0; j < c; j++)
  {
   printf("a%d%d: ", i + 1, j + 1);
   scanf("%d", &A[i][j]);
  }
 }

 for (i = 0; i < r; i++)
 {
  max = A[i][0];
  for (j = 0; j < c; j++)
  {
   if (A[i][j] > max)
   {
    B[i] = A[i][j];
   }
  }
 }
 B[i] = '\0';
 printf("The largest elements of each row are:\n");
 for (i = 0; i < r; i++)
 {
  printf("%d ", B[i]);
 }
 return 0;
}