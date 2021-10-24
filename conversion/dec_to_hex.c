#include <stdio.h>

int main()
{
 int dec, hex[100], rem, i, j;
 printf("Enter a decimal number: ");
 scanf("%d", &dec);

 i = 0;
 while (dec != 0)
 {
  rem = dec % 16;
  if (rem < 10)
  {
   rem += 48;
  }
  else
  {
   rem += 55;
  }
  hex[i] = rem;
  dec = dec / 16;
  i++;
 }

 printf("Hexadecimal equivalent = ");
 for (j = i - 1; j >= 0; j--)
 {
  printf("%c", hex[j]);
 }
 return 0;
}
