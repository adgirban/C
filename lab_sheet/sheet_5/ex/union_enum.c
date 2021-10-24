#include <stdio.h>

union hotel //It has only one memory location so values are overwritten.
{
 char name[40];
 char address[40];
};
typedef union hotel hotel;

enum week
{
 sunday,
 monday,
 tuesday,
 wednesday,
 thursday,
 friday,
 saturday
};
typedef enum week week;

int main()
{
 hotel h;
 week today;

 printf("Enter the name of hotel\n");
 gets(h.name);
 printf("Enter the address of hotel\n");
 gets(h.address);
 printf("\n");

 printf("Hotel Information:\n");
 printf("Name : %s\n", h.name);
 printf("Address : %s\n", h.address);

 today = wednesday;
 printf("Day : %d", today + 1);

 return 0;
}