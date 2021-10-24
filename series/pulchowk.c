#include <stdio.h>

int main()
{
 char str[] = "PULCHOWK";
 int i, j;

 for (i = 1; i < 9; i++)
 {
  for (j = 0; j < i; j++)
  {
   if ((i != 4 || i != 6 || i != 8) && ((i % 2 != 0 && j % 2 != 0) || (i == 2 && j == 1) || (i == 7 && j == 0)))
   {
    putchar(str[j] + 32);
   }
   else
   {
    putchar(str[j]);
   }
  }
  putchar('\n');
 }
 return 0;
}