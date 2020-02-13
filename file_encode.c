#include <stdio.h>

#include <string.h>



void line_switch(char *message, char *shift_message);

int main(void)

{

printf("\nEnter file name: ");

char input[101], output[101]; //name of the file holding array

scanf("%s", input);

strcpy(output, input);

strcat(output, ".swt"); //adding swt to the new file

FILE *inputFile = fopen(input, "r"); //r for the read

FILE *outputFile = fopen(output, "w"); //w for the write

char sent1[1001]; //to hold the words inside the file

char sent2[1001]; //to transform the word by performing shift operation

while(fgets(sent1, sizeof(sent1), inputFile))

{

line_switch(sent1, sent2);

fputs(sent2, outputFile); // putting the encoded message into output file

printf("encorded messages are now written to swt version");

}

fclose(inputFile); /*closing
                      both
                        files*/
fclose(outputFile);

return 0;

}
void line_switch(char *message, char *shift_message)
{


    for(; *message != '\0'; message++)
    {

             if(*message >= 'a' && *message <= 'z')
             *shift_message++ = (25-(*message - 'a') )% 26 + 'a';
          else if(*message >= 'A' && *message <= 'Z')
             *shift_message++ = (25-(*message - 'A' ))% 26 + 'A';
          else
            *shift_message++ = *message;
    }

    *shift_message='\0';
}
