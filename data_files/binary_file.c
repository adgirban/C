#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct customer
{
 char name[100];
 int age;
};

typedef struct customer customer;

int main()
{
 customer c[100], d[100];
 int i = 0;
 char ch;
 char filename[50];
 do
 {
  printf("Enter name of customer: ");
  gets(c[i].name);
  printf("Enter age of customer: ");
  scanf("%d", &c[i].age);
  printf("Do you want to add more?(Y/N)\n");
  ch = getch();
  i++;
  fflush(stdin);
 } while (ch == 'Y' || ch == 'y');

 FILE *fp;
 printf("Enter filename(*****.dat): ");
 gets(filename);
 fp = fopen(filename, "ab");
 if (fp == NULL)
 {
  printf("\nFILE DOES NOT EXIST !\n");
 }
 fwrite(c, sizeof(c), 1, fp);
 fprintf(fp, "\nNo of customer records = %d", i);
 fclose(fp);

 fp = fopen(filename, "rb");
 fread(d, sizeof(d), 1, fp);
 for (int j = 0; j < i; j++)
 {
  printf("Customer %d:\t Name: %s\t Age: %d\n", j, d[j].name, d[j].age);
 }
 fseek(fp, -1, SEEK_END);
 printf("Total No of Customer Records = %d", getw(fp));
 fclose(fp);
 return 0;
}