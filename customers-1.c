#include<stdio.h>
#include<string.h>
#define MAX_CUSTOMERS 200

struct customer{

char email[100];

char name[100];

int purchased;

};

//void selection_sort(struct customer top10[], int n);
int compare(const void *p, const void *q);
int main(){

char finput[50]; //holding the output file variable

printf("Enter input filename: ");

scanf("%s", finput); //promt to user for entering a name
char foutput[50] = "top10_";
// concatenate "top10_" in readname
strcat(foutput, finput);

FILE *fp; //intializing a file pointer

fp = fopen(finput, "r"); //file to read from

if(fp==NULL){

printf("Unable to open file\n");

return -1; //returns error

}

struct customer customers[MAX_CUSTOMERS];

int n=0;

while(!feof(fp)){ //while loop focused on entering the file into its specific types in struct variables.

fscanf(fp, "%s %d %[^\n]s", customers[n].email, &customers[n].purchased, customers[n].name);

n++; //inclreases the counter after every iteration

}

fclose(fp); //close fp to save

//selection_sort(customers, n); //sorted in the decending order
qsort((void*)customers,n,sizeof(customer[0]),compare);
fp = fopen(foutput, "w"); //file to write

int i;
for(i=0; i<n && i<10; i++){

fprintf(fp, "%s %d %s\n", customers[i].email, customers[i].purchased, customers[i].name);

}

fclose(fp);

return 0;

}
int compare(const void *a, const void *b){
  if(((struct customer *)a)->purchased < ((struct customer *)b)->purchased){
    return -1;
  }
  else if(((struct customer *)a)->purchased == ((struct customer *)b)->purchased){
    return 0;
  }
  else{
    return 1;
  }
}

/*void selection_sort(struct customer top10[], int n){
int i;
int j;
for(i=0; i<n; i++){

for(j=i+1; j<n; j++){

if(top10[i].purchased<top10[j].purchased){

struct customer temp = top10[i];

top10[i] = top10[j];

top10[j] = temp;

}

}

}

}*/
