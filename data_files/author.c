#include <stdio.h>
#include <stdlib.h>

struct author
{
 char name[50];
 char nationality[20];
 int no_of_books;
};

typedef struct author author;

int main()
{
 author a[50], b[50];
 char ch;
 int i = 0;
 FILE *fptr;
 fptr = fopen("author.txt", "w");
 do
 {
  printf("Enter details of author %d:\n", i + 1);
  fflush(stdin);
  printf("Name : ");
  gets(a[i].name);
  printf("Nationality : ");
  gets(a[i].nationality);
  printf("No of books published : ");
  scanf("%d", &a[i].no_of_books);

  printf("Do you want to add another record? ");
  fflush(stdin);
  ch = getchar();
  i++;
 } while (ch == 'Y' || ch == 'y');
 fwrite(a, sizeof(a), 1, fptr);
 fclose(fptr);

 int n;
 printf("Enter which record to display?\n");
 scanf("%d", &n);

 fptr = fopen("author.txt", "r");
 if (fptr == NULL)
 {
  printf("FILE CANNOT BE OPENED\n");
  exit(0);
 }

 fread(b, sizeof(b), 1, fptr);

 printf("Name: %s\nNationality: %s\nNo of Books: %d", b[n - 1].name, b[n - 1].nationality, b[n - 1].no_of_books);
 fclose(fptr);
 return 0;
}