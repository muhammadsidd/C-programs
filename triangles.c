#include <stdio.h>

int main (void){
/*Declaring variables to store user's input*/
double x;
double y;
double z;
/*Asking user for the input*/
printf("Please Type the Three side of Triangle: ");
/*Storing it in the respective variable*/
scanf("%lf%lf%lf:", &x,&y,&z);
/*condition for valid triangle*/
if(!(x+y>z && y+z > x && x+z > y)){
printf("These sides do not form a triangle\n");
}
/*condtion for Right Angled*/
else if((x*x)+(y*y)== (z*z) || (x*x)+(z*z)==(y*y) || (y*y)+(z*z) == (x*x)){
printf("These sides form an Right Triangle\n");
}
/*Condition for equalateral*/
else if(x==y && x==z){
printf("These sides form an Equalateral Triangle\n");
}
/*condition for isoceles*/
else if((x==y && x!=z) || (x==z && x!=y) || (y==z && y!=x)){
printf("This is an isoceles Triangle\n");
}

return 0;
}
