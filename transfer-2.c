
#include <stdio.h>

int main (void){

int N;

printf("enter the length of array1: ");
/*Filling the number of elements that can be stored in the array*/
scanf("%d",&N);

  int a[N];

printf("Enter %d items to fill the array: ", N);
/*taking user's input to fill the elements in the array*/
int i,j;
  for (i = 0; i < N; i++){
    scanf("%d", &a[i]);
}

/*size for the second array*/
int n2;

printf("enter the length of array2: ");
	scanf("%d", &n2);

int a2[n2];
/*user is asked to fill the array corresponding with the number of elements*/
printf("Enter %d items to fill the array: ", n2);

for(j=0; j<n2; j++){
	scanf("%d", &a2[j]);
}
/*showing the items currently in the array*/
printf("items in array 1 are: ");

for(i=0; i<N ; i++){
	printf("%d ", a[i]);
}

printf("\nitems in array 2 are: ");
for(j=0; j< n2; j++){
	printf("%d ", a2[j]);
}

int transferred,start,end,index;
/*asking for the start and end index for the transfer*/
printf("\nEnter the Start and End index of item in Array 1 to be tranferred to array 2: ");
	scanf("%d %d",&start,&end);
/*asking for the desired position of array 2 to be add the transferred elements*/
printf("Enter the index of array 2 you would like the item to be added to: ");
	scanf("%d", &index);

transferred = end - start +1;

int x =0;
int temp;
/*while loops switches the elements arounds and deletes the elements to be transffered from the array 1*/
while (x < transferred){
/*temp to hold the value.*/
	 temp = a[start];

/*This for loops deletes the elements from start to the end index of array 1*/  
	for(j=start; j<N; j++) {
/*now the start has switched to the next value */
	a[j] = a[j+1];

	}
/*deleting the elements means decreasing the size of the current array */
	N--;
/*for loops puts the element inside temp to the desired position*/
	for(j = n2-1; j >= index; j--) {

	a2[j+1] = a2[j];

	}

	a2[index] = temp;
	index++;
/*size is increased as elements are added*/
	n2++;

	x++;
}

/*updated array 1 printed*/
printf("Elements in array 1 are now: ");

for(i = 0; i < N; i++) {
	printf("%d ",a[i]);
}
/*updates array 2*/
printf("\nElements in array 2 are now: ");

for(j = 0; j < n2; j++) {

	printf("%d ",a2[j]);

}

return 0;


}
