#include <stdio.h>

int main (void){

	int y;
	printf("Enter the year of birth:");
	scanf("%d", &y);
if (y != 0){
	switch (y % 12){
	case 0: printf("The Chinese animal sign for %d is Monkey", y);
	break;
	case 1: printf("The Chinese animal sign for %d is Rooster",y);
	break;
	case 2: printf("The Chinese animal sign for %d is Dog",y);
	break;
	case 3: printf("The Chinese animal sign for %d is Pig",y);
	break;
	case 4: printf("The Chinese animal sign for %d is Rat",y);
	break;
	case 5: printf("The Chinese animal sign for %d is Ox",y);
	break;
	case 6: printf("The Chinese animal sigm for %d is Tiger",y);
	break;
	case 7: printf("The Chinese animal sign for %d is Rabbit",y);
	break;	
	case 8: printf("The Chinese animal sign for %d is Dragon",y);
	break;
	case 9: printf("The Chinese animal sign for %d is Snake",y);
	break;
	case 10: printf("The Chinese animal sign for %d is Horse", y);
	break;
	case 11: printf("The Chinese animal sign for %d is Sheep",y);
	break;
	}
}
else {
	printf("Invalid year");
}

return 0;
}  

