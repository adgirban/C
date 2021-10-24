#include <stdio.h>
#include <math.h>

struct cart
{
 float x1;
 float x2;
 float y1;
 float y2;
 float dist;
};

typedef struct cart cart;

int main()
{
 cart c;

 printf("x1 : ");
 scanf("%f", &c.x1);
 printf("x2 : ");
 scanf("%f", &c.x2);
 printf("y1 : ");
 scanf("%f", &c.y1);
 printf("y2 : ");
 scanf("%f", &c.y2);

 c.dist = ((c.x2 - c.x1) * (c.x2 - c.x1) + (c.y2 - c.y1) * (c.y2 - c.y1));
 printf("The distance between points is : %.4f", sqrt(c.dist));
 return 0;
}