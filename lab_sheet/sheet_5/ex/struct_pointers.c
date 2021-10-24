#include <stdio.h>

struct company
{
 char name[40];
 char address[20];
 long long int phone;
 int noOfEmployee;
};
typedef struct company company;

void input_display(company *ptr)
{
 fflush(stdin);
 printf("Enter Name of company\n");
 gets(ptr->name);
 printf("Enter Address of company\n");
 gets(ptr->address);
 printf("Enter phone no of company\n");
 scanf("%lld", &ptr->phone);
 printf("Enter no of employees\n");
 scanf("%d", &ptr->noOfEmployee);
 printf("\n");

 printf("Company Details\n");
 printf("Name : %s\n", ptr->name);
 printf("Address : %s\n", ptr->address);
 printf("Phone No : %lld\n", ptr->phone);
 printf("No of Employees : %d\n", ptr->noOfEmployee);
 printf("\n");
}

int main()
{
 int i;
 company c;
 input_display(&c);
 return 0;
}
