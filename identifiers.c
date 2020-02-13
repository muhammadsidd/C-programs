#include <stdio.h>

int main (void){

char ch;
/*Ask the bro for input*/

printf("Type a text to know if it is legal or illegal identifier in C: ");

/*do while loop for checking each character until the bro hits enter*/

do{
/*get and save the brother's input in the variable ch*/
ch = getchar();

/*my fam if statement checks for every illegal identifier and prints out a statement accordingly*/

	if (!((ch >= 'a' && ch<='z') || (ch >= 'A' && ch<= 'Z') || (ch =='_'))){
		printf("This is an illegal identifier\n");
/*Return 0 terminates the program if it catches and illegal identifier*/
		return 0;
		}
/*Else if it seens a valid in put it breaks out of loop and prints the valid output*/ 

else{
	break;
	}

} while (ch != '\n');

printf("This is a legal identifier\n");
return 0;
}
