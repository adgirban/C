#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
 int dec = 0, rem, i, len = 0;
 char hex[100];
 printf("Enter a hexadecimal number: ");
 gets(hex);

 len = strlen(hex);
 len--;

 i = 0;
 while (hex[i] != '\0')
 {
  if (hex[i] >= '0' && hex[i] <= '9')
  {
   rem = hex[i] - 48;
  }
  else if (hex[i] >= 'a' && hex[i] <= 'f')
  {
   rem = hex[i] - 97 + 10;
  }
  else if (hex[i] >= 'A' && hex[i] <= 'F')
  {
   rem = hex[i] - 65 + 10;
  }
  dec += rem * pow(16, len);
  len--;
  i++;
 }

 printf("Decimal equivalent = %d", dec);
 return 0;
}
