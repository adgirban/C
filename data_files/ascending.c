#include <stdio.h>
#include <string.h>

struct stud
{
 char name[50];
 int age;
};

int main()
{
 struct stud s[100], r[100], temp;
 char ch;
 int n, i = 0, j, k;
 FILE *fptr;
 fptr = fopen("ascending.txt", "w");
 do
 {
  fflush(stdin);
  printf("\nEnter the name of student %d: ", i + 1);
  gets(s[i].name);
  printf("Enter the age of student %d: ", i + 1);
  scanf("%d", &s[i].age);
  printf("Do you want to add another record? ");
  ch = getch();
  i++;
 } while (ch == 'Y' || ch == 'y');

 fwrite(s, sizeof(s), 1, fptr);
 fclose(fptr);

 fptr = fopen("ascending.txt", "r");
 fread(r, sizeof(r), 1, fptr);
 for (j = 0; j < i; j++)
 {
  for (k = j + 1; k < i; k++)
  {
   if (strcmp(r[j].name, r[k].name) > 0)
   {
    temp = r[j];
    r[j] = r[k];
    r[k] = temp;
   }
  }
 }
 printf("Ascending Order:");
 for (j = 0; j < i; j++)
 {
  printf("\nName: %s\nAge: %d\n", r[j].name, r[j].age);
 }
 return 0;
}