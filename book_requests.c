#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#define TITLE_LEN 100

#define NAME_LEN 30

struct book{

    char title[TITLE_LEN+1];
    char first[NAME_LEN+1];
    char last[NAME_LEN+1];
    double price;
    int num_requests;
    struct book *next;

};

struct book *append_to_list(struct book *list);

void update(struct book *list);

void printList(struct book *list);

void clearList(struct book *list);

int read_line(char str[], int n);

/**********************************************************
*  main: Prompts the user to enter an operation code,     *
*  then calls a function to perform the requested   *
*  action. Repeats until the user enters the        *
*  command 'q'. Prints an error message if the user *
*  enters an illegal code.
***********************************************************/
int main(void)

{

char code;

struct book *book_list = NULL;

printf("Operation Code: a for appending to the list, u for updating a book , p for printing the list; q for quit.\n");

for (;;) {

printf("Enter operation code: ");

scanf(" %c", &code);

while (getchar() != '\n');

switch (code) {

case 'a': book_list = append_to_list(book_list);
          break;
case 'u': update(book_list);
          break;
case 'p': printList(book_list);
          break;
case 'q': clearList(book_list);
          return 0;

default: printf("Illegal code\n");
}

printf("\n");
  }
}

/* ****************************************************
*Append to list prompts the user to enter the title of the book
*first name and last name of the author and checks to see if the
*books already exits if the books exists it tells the user to update
*if the book does not exist it appends to the list, adds prices and new book
********************************************************/

struct book *append_to_list(struct book *list){
struct book *node=list; //pointer to the struct

struct book *temp=(struct book *)malloc(sizeof(struct book)); //memory allocation for the new book

//This is transfer to read line function for storing the new book information
printf("Enter book title : ");
read_line(temp->title,TITLE_LEN+1);
printf("Enter first name : ");
read_line(temp->first,NAME_LEN+1);
printf("Enter last name : ");
read_line(temp->last,NAME_LEN+1);

int present=0; //flag variable

// while loop to check the linked list for the existing books
while(node!=NULL)

{

if((strcmp(temp->title,node->title)==0) && (strcmp(temp->first,node->first)==0) && (strcmp(temp->last,node->last)==0) ){
present=1;
  break;
}
else
node=node->next;
}

if(present==1){
  printf("\n BOOK ALREADY EXIST IN THE LIST ");
  return list;
  free (temp);
}
else
{

printf("\n Enter book price ");
scanf("%lf",&temp->price);
printf("Enter number of Books : ");
scanf("%d",&temp->num_requests);

if(list==NULL){
list=temp;
}
else{
temp->next=list;
list=temp;
}
return list;
}

}

void update(struct book *list)

{

struct book *node=list;
struct book *temp=(struct book *)malloc(sizeof (struct book));//memory allocation for the new book

//This is transfer to read line function for storing the new book information

printf("Enter book title : ");
read_line(temp->title,TITLE_LEN+1);

printf("Enter first name : ");
read_line(temp->first,NAME_LEN+1);

printf("Enter last name : ");
read_line(temp->last,NAME_LEN+1);

int present=0; //flag variable

// while loop to check the linked list for the existing books

while(node!=NULL)

{

  if((strcmp(temp->title,node->title)==0) && (strcmp(temp->first,node->first)==0) && (strcmp(temp->last,node->last)==0) ){

    present=1;
    break;
  }
  else
    node=node->next;

}

if(present==1){
    int n;
    printf("\n Enter number of Books: ");
    scanf("%d",&n);
    node->num_requests+=n;

}

else{
  printf("\nBOOK DOES NOT EXIST ");
}

}

void printList(struct book *list){

//Printing the complete list

if(list==NULL)
{
return;
}
while(list!=NULL)
{
printf("\nPrinting the Title , Price , Number of Request of All Books , \n");
printf("\n%s %1f %d", list->title, list->price, list->num_requests);
list=list->next;
}
printf("\n");

}

void clearList(struct book *list)

{
  struct book *node=list;

  struct book *temp;

  while(node!=NULL)

  {

  temp=node;

  node=node->next;

  temp->next=NULL;

  free (temp);

  }

}

int read_line(char str[], int n)
{
  int ch, i = 0;

while (isspace(ch = getchar()))
;
str[i++] = ch;
while ((ch = getchar()) != '\n') {
if (i < n)
  str[i++] = ch;

    }
    str[i] = '\0';
    return i;
}
