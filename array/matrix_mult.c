/**********************************************************************************
filename    :   matrix_mult.c
author      :   Girban Adhikari (THA077BCT017)
created date:   2021/07/18
description :   This program multiplies any two matrices taking input elements for the matrix from the user.
**********************************************************************************/
#include <stdio.h>

void input_matrix(int mat[10][10], int i, int j)
{
 int c, d;

 printf("Enter elements of matrix:\n");
 for (c = 0; c < i; c++)
 {
  for (d = 0; d < j; d++)
  {
   printf("a%d%d = ", c + 1, d + 1);
   scanf("%d", &mat[c][d]);
  }
 }
}

void multiply_matrix(int A[][10], int B[][10], int result[][10], int i1, int j1, int i2, int j2)
{
 int i, j, k;

 //initializing elements of matrix mult to 0
 for (int i = 0; i < i1; ++i)
 {
  for (int j = 0; j < j2; ++j)
  {
   result[i][j] = 0;
  }
 }

 for (i = 0; i < i1; i++)
 {
  for (j = 0; j < j2; j++)
  {
   for (k = 0; k < j1; k++)
   {
    result[i][j] += A[i][k] * B[k][j];
   }
  }
 }
}

void display(int A[][10], int B[][10], int result[][10], int i1, int j1, int i2, int j2)
{
 int a, b, p, q;
 printf("A:\n");
 for (p = 0; p < i1; p++)
 {
  for (q = 0; q < j1; q++)
  {
   printf("%d\t", A[p][q]);
  }
  printf("\n");
 }

 printf("\nB:\n");
 for (p = 0; p < i2; p++)
 {
  for (q = 0; q < j2; q++)
  {
   printf("%d\t", B[p][q]);
  }
  printf("\n");
 }

 printf("\nThe product is =\n");
 for (a = 0; a < i1; a++)
 {
  for (b = 0; b < j2; b++)
  {
   printf("%d\t", result[a][b]);
  }
  printf("\n");
 }
}

int main()
{
 int i1, j1, i2, j2, A[10][10], B[10][10], result[10][10];
 printf("Enter rows and column of matrix A:\n");
 scanf("%d%d", &i1, &j1);
 input_matrix(A, i1, j1);

 printf("Enter rows and column of matrix B:\n");
 scanf("%d%d", &i2, &j2);
 input_matrix(B, i2, j2);

 if (j1 != i2)
 {
  printf("Matrices with entered orders cannot be multiplied.\n");
 }
 else
 {
  multiply_matrix(A, B, result, i1, j1, i2, j2);
  display(A, B, result, i1, j1, i2, j2);
 }
 return 0;
}