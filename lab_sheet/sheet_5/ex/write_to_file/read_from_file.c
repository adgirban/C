#include <stdio.h>
#include <stdlib.h>

int main()
{
 FILE *fptr1;
 char c;
 int num = 0;

 fptr1 = fopen("filec.txt", "r");
 if (fptr1 == NULL)
 {
  printf("FILE CANNOT BE OPENED\n");
  exit(0);
 }

 while ((c = fgetc(fptr1)) != EOF)
 {
  printf("%c", c);
  num++;
 }

 printf("\nNo of characters = %d", num);
 return 0;
}