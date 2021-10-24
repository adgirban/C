#include <stdio.h>
#include <stdlib.h>

int main()
{
 FILE *fptr1;
 char c;

 fptr1 = fopen("filec.txt", "w");
 printf("File created successfully.");
 printf("\nEnter text to write (press < enter > to save & quit):\n");
 while ((c = getchar()) != '\n')
 {
  fputc(c, fptr1);
 }
 printf("\nData written successfully.");
 fclose(fptr1);
}