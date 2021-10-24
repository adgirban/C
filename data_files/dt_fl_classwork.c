//Following code is written and compiled in VS Code IDE
#include <stdio.h>
#include <stdlib.h>

int main()
{
 FILE *fptr, *fptr1;
 char c;
 fptr = fopen("myfile.txt", "r");

 if (fptr == NULL)
 {
  printf("FILE CANNOT BE OPENED\n");
  exit(0);
 }
 // while ((c = fgetc(fptr)) != EOF)
 // {
 //     printf("%c", c);
 // }
 fptr1 = fopen("myfile1.txt", "w");
 while ((c = fgetc(fptr)) != EOF)
 {
  fprintf(fptr1, "%c", c);
 }
 fclose(fptr);
 fclose(fptr1);
 return 0;
}