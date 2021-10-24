#include <stdio.h>

int main()
{
 char c = 'A';
 int a = 10, b = 0x0A;
 float p = 10.2325;
 char name[10] = "Ram Shah";

 // character print
 printf("'A' in Character is %c.\n", c);
 printf("'A' in number is %d.\n", c);
 printf("'A' in hex number is %X.\n", c);

 // int print
 printf("10 in decimal is %d.\n", a);
 printf("10 in octal is %o.\n", a);
 printf("10 in hexadecimal is %x.\n", a);
 printf("10 in hexadecimal is %X.\n", a);
 printf("0A in integer is %i.\n", b);
 printf("0A in decimal is %d.\n", b);
 printf("0A in hexadecimal is %x.\n", b);
 printf("0A in hexadecimal is %X.\n", b);

 // float print
 printf("10.2325 is %f\n", p);
 printf("10.2325 is %.2f\n", p);
 printf("10.2325 is %.9f\n", p);
 printf("10.2325 is %06.2f\n", p);

 // string print
 printf("\"Ram Shah\" in string is %s.\n", name);

 // default print
 printf("c=%c,a=%d,b=%X,p=%f,name=%s.\n", c, a, b, p, name);
}