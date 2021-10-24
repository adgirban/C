#include <stdio.h>

struct company
{
 char name[20];
 char address[20];
 long long int phone;
 int noOfEmployee;
};
typedef struct company company;
int main()
{
 int i;
 company c;

 fflush(stdin);
 printf("Enter Name of company\n");
 gets(c.name);
 printf("Enter Address of company\n");
 gets(c.address);
 printf("Enter phone no of company\n");
 scanf("%lld", &c.phone);
 printf("Enter no of employees\n");
 scanf("%ld", &c.noOfEmployee);
 printf("\n");

 printf("Comany Details\n");
 printf("Name : %s\n", c.name);
 printf("Address : %s\n", c.address);
 printf("Phone No : %lld\n", c.phone);
 printf("No of Employees : %d\n", c.noOfEmployee);
 printf("\n");
 return 0;
}
