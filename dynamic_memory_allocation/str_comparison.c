#include <stdio.h>
#include <stdlib.h>

int comp(char str1[], char str2[])
{
 int i, len = 0, flag = 0;
 for (i = 0; str1[i] != '\0'; i++)
 {
  len++;
 }

 for (i = 0; i < len; i++)
 {
  if (str2[i] != str1[len - 1 - i])
  {
   flag = 1;
  }
 }
 return flag;
}

int main()
{
 char *str1, *str2;
 str1 = (char *)malloc(10 * sizeof(char));
 str2 = (char *)malloc(10 * sizeof(char));
 printf("Enter string 1: ");
 gets(str1);
 printf("Enter string 2: ");
 gets(str2);
 int c;
 c = comp(str1, str2);

 if (c == 0)
 {
  printf("Rev[str1] = str2");
 }
 else
 {
  printf("Rev[str1] != str2");
 }
 free(str1);
 free(str2);
 return 0;
}
