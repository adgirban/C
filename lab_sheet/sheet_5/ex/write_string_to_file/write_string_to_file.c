#include <stdio.h>
#include <stdlib.h>

int main()
{
 FILE *fptr1;
 char str[4][40];
 int i;

 fptr1 = fopen("stringc.txt", "w");
 for (i = 0; i < 4; i++)
 {
  printf("Enter string %d\n", i + 1);
  scanf("%s", str[i]);
  fputs(str[i], fptr1);
  fputs("\n", fptr1);
 }
 fclose(fptr1);

 fptr1 = fopen("stringc.txt", "r");
 if (fptr1 == NULL)
 {
  printf("FILE CANNOT BE OPENED\n");
 }
 printf("\n");
 for (i = 0; i < 4; i++)
 {
  fgets(str[i], 40, fptr1);
  printf("%s", str[i]);
 }
 fclose(fptr1);
 return 0;
}