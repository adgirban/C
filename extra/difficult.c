#include <stdio.h>
#include <string.h>

int main()
{
 char *temp[100], *str[100];
 int i, j;
 // char *str[5] = {"bad", "mad", "lad", "dad", "sad"};
 printf("Enter 5 strings:\n");
 for (i = 0; i < 5; i++)
 {
  fflush(stdin);
  gets(&str[i]);
 }

 for (i = 0; i < 5; i++)
 {
  for (j = i + 1; j < 5; j++)
  {
   if (strcmp(str[i], str[j]) > 0)
   {
    *temp = str[i];
    str[i] = str[j];
    str[j] = *temp;
   }
  }
 }

 printf("Ascending Order:\n");
 for (i = 0; i < 5; i++)
 {
  printf("%s\n", str[i]);
 }
 return 0;
}
