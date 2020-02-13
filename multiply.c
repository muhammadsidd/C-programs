#include<stdio.h>

/*each array is passed to this class from the main
since it is a void class there is no return type and this 
class is just used to perform the desired operation */

void multiply(int a1[], int n, int a2[], int a3[])
{

/*for loops takes the int i and iterates through n times 
and multiplies corresponding elements of array 1 and 2
and stores the value in the 3rd array*/
int i;
for(i=0;i<n;i++)
{
/*operation*/
a3[i]=a1[i]*a2[i];
}
printf("Answer: ");
for(i=0;i<n;i++)
{
printf("%d ",a3[i]);
} 
}
int main()
{
int n;
printf("Enter the length of the arrays: ");
/*user is asked state the size of the arrays*/
scanf("%d",&n);
int a1[n],a2[n],a3[n];
printf("Enter the elements of the array #1:");
int i;
for(i=0;i<n;i++)
{
/*fill the array*/
scanf("%d",&a1[i]);
}
printf("Enter the elements of the array #2:");
for(i=0;i<n;i++)
{
scanf("%d",&a2[i]);
}
/*items are passed to the other class to perform multiplication operation*/
multiply(a1,n,a2,a3);

}
