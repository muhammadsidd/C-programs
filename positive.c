#include <stdio.h>

void extract(int *a, int n, int* positive, int *size)
{
int *p;
for (p = a; p < a+n; p++) // loop through all the indices
{
int number = *p; // the number at the current index
if (number > 0) // if number is positive
{
*(positive + *size) = number; // set the next index of positive array to the number
(*size)++; // increment the size of the positive array
}
}
}

int main()
{
printf("Enter the length of the array: ");
int n;
scanf("%d", &n);
printf("Enter the elements of the array: ");
int a[n], positive[n], *p, i;
for (p = a; p < a+n; p++) //points to the first element and fills the rest of the element with user input
scanf("%d", p);
int size = 0;
extract(a, n, positive, &size);

printf("Output: ");

for (p=positive; p < positive+size ; p++) //prints out the positive integers using pointer arathematic. 
printf("%d ", *p);

printf("\n");

return 0;
}
