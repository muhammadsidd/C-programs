#include <stdio.h>

void rearrange(int *a1, int n, int *a2){

int i;

int locator=0; //increament the size and holds the element in the last index

for(i=0;(2*i+1)<n;i++) //For loop for odd Elements in the array hold to the new array
{

*(a2+i) =*(a1+2*i+1);

locator++; //increment the size

}

for(i=0;2*i<n;i++) //for the even elements of the array store to new array
{

*(a2+locator) =*(a1+(2*i));

locator++;

}

}

int main ()

{

int n;
int *p;

printf("Enter the length of array : ");

scanf("%d",&n); //asking user for the size of the array


int arr[n] ; //Creating array with the n number of elements
printf("Enter the element of the array : ");

for(p=arr;p<arr+n;p++){

scanf("%d",p); //pointer pointing to the elements of array equavalent to  &a[i]

}

int newArray[n]; //new array to rearrange the even and odd elements

printf("Output : ");

rearrange(arr,n,newArray); //array address passed

for(p =newArray;p<newArray+n;p++)//for loop  to print out the elements of array using pointer arathematic 
{

printf("%d ",*p);

}

return 0;

}
