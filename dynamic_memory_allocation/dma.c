//Following code is written and compiled in VS Code IDE
#include <stdio.h>
#include <stdlib.h>

int main()
{
 /*
 //It shows the use of malloc
 int *ptr;
 int n;
 printf("Enter the size of array you want to create\n");
 scanf("%d", &n);

 ptr = (int *)malloc(n * sizeof(int));
 for (int i = 0; i < n; i++)
 {
     printf("Enter the value %d of this array\n",i);
    scanf("%d", &ptr[i]);
 }

 for (int i = 0; i < n; i++)
 {
     printf("The value at %d of this array is %d\n",i, ptr[i]);
 } */

 //It shows the use of calloc
 int *ptr;
 int n;
 printf("Enter the size of array you want to create\n");
 scanf("%d", &n);

 ptr = (int *)calloc(n, sizeof(int));
 for (int i = 0; i < n; i++)
 {
  printf("Enter the value %d of this array\n", i);
  scanf("%d", &ptr[i]);
 }

 for (int i = 0; i < n; i++)
 {
  printf("The value at %d of this array is %d\n", i, ptr[i]);
 }

 //It shows the use of realloc
 printf("Enter the size of new array you want to create\n");
 scanf("%d", &n);

 ptr = (int *)realloc(ptr, n * sizeof(int));
 for (int i = 0; i < n; i++)
 {
  printf("Enter the new value %d of this array\n", i);
  scanf("%d", &ptr[i]);
 }

 for (int i = 0; i < n; i++)
 {
  printf("The new value at %d of this array is %d\n", i, ptr[i]);
 }

 free(ptr); //It shows the use of free

 return 0;
}
