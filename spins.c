#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
/* to generate a TRUELY random number that is depended on the changing variable that is time */ 
srand(time(NULL)); 
/* int i and counter are used in the for loop to keep the count for same number of spins int i is used to getnerate no more than 12 spins */
int i=0;
int count = 0;
while (i < 12) {
/* three random numbers are genrated each with a ramainder of 14 meaning number in range from 0 to 13  */
int n1 = rand() % 14;
int n2 = rand() % 14;
int n3 = rand() % 14;

if(n1 == 0) {
printf("Diamond");
} else if(n1 == 1) {
printf("Heart");
} else if(n1 == 2) {
printf("Apple");
} else if(n1 == 3) {
printf("Orange");
} else if(n1 == 4) {
printf("Lime");
} else if(n1 == 5) {
printf("Sun");
} else if(n1 == 6) {
printf("Mountain");
} else if(n1 == 7) {
printf("Mickey");
} else if(n1 == 8) {
printf("Banana");
} else if(n1 == 9) {
printf("Cherry");
} else if(n1 == 10) {
printf("Garfield");
} else if(n1 == 11) {
printf("Television");
} else if(n1 == 12) {
printf("Coolers");
} else if(n1 == 13) {
printf("Lemonade");
}
/*for the second run*/
printf(" ");
if(n2 == 0) {
printf("Diamond");
} else if(n2 == 1) {
printf("Heart");
} else if(n2 == 2) {
printf("Apple");
} else if(n2 == 3) {
printf("Orange");
} else if(n2 == 4) {
printf("Lime");
} else if(n2 == 5) {
printf("Sun");
} else if(n2 == 6) {
printf("Mountain");
} else if(n2 == 7) {
printf("Mickey");
} else if(n2 == 8) {
printf("Banana");
} else if(n2 == 9) {
printf("Cherry");
} else if(n2 == 10) {
printf("Garfield");
} else if(n2 == 11) {
printf("Television");
} else if(n2 == 12) {
printf("Coolers");
} else if(n2 == 13) {
printf("Lemonade");
}
/*for the third run*/
printf(" ");
if(n3 == 0) {
printf("Diamond");
} else if(n3 == 1) {
printf("Heart");
} else if(n3 == 2) {
printf("Apple");
} else if(n3 == 3) {
printf("Orange");
} else if(n3 == 4) {
printf("Lime");
} else if(n3 == 5) {
printf("Sun");
} else if(n3 == 6) {
printf("Mountain");
} else if(n3 == 7) {
printf("Mickey");
} else if(n3 == 8) {
printf("Banana");
} else if(n3 == 9) {
printf("Cherry");
} else if(n3 == 10) {
printf("Garfield");
} else if(n3 == 11) {
printf("Television");
} else if(n3 == 12) {
printf("Coolers");
} else if(n3 == 13) {
printf("Lemonade");
}
/* if statement is used to keep the count for the similar outcomes*/
if(n1 == n2 || n2 == n3 || n3 == n1) {
++count;
}
/*increment the index for the while loop to avoid an infinite loop*/
i++;
printf("\n");
}
printf("You have 2 or more same symbols in %d spins\n", count);
return 0;
}
