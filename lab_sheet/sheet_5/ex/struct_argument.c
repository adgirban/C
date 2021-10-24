#include <stdio.h>

struct add
{
 int a;
 int b;
 int sum;
};

typedef struct add add;

add input(add c)
{
 printf("a : ");
 scanf("%d", &c.a);
 printf("b : ");
 scanf("%d", &c.b);
 return c;
}

int main()
{
 add c;
 c = input(c);

 c.sum = c.a + c.b;
 printf("The sum is : %d", c.sum);
 return 0;
}