#include <stdio.h>
#include <string.h>
#define N 1000

void read_line(char *str, int n); 
int search_keystrokes(char *s1, char *s2);

int main (void){

char stringInput[N+1]; // using N+1 for the null character 
char triplekey[N+1];
printf("Enter The Sentence: "); //asking for input

read_line(stringInput, N); //argumets are passed to the realine character in place of scanf function 

if(search_keystrokes(stringInput,triplekey) == 1){ //corresponding to the true and false value of the function

printf("Error: found three consecutive keystrokes");

printf("%s", triplekey);
}

else {
printf("No key consecutive key strokes were found - VALID input \n");
printf("%s", stringInput);
}


return 0;
}

void read_line(char *str, int n){ // read line character from the lecture slides

int ch, i = 0; 

	while ((ch = getchar()) != '\n'){ 
		 if (i < n){  
		* str++ = ch;
		i++;
                 }
	}
	*str ='\0';                      // null character at the end of the array 

}

int search_keystrokes(char *s1, char *s2){

int length = strlen(s1);  //counting the length of the string for the fcondition of the loop termination 
int count =0;
int i,j;
for (i=0; i<length; i++)
{
	count =1; 

	for (j=i+1; j< length; j++){ //scanning the i+1 element or the next itterating element 

		if(s1[i] != s1[j]){ //breaks the nested for loop if the keystrokes are not consecutive 
			break;
		}

		count++; //increaments the count if there are keystrokes 

	}

	if (count >= 3)
	{
	s2 += s1[i];
	return 1; //return 1 if found 
	}
}

return 0;
}
