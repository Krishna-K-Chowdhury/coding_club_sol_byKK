#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100   //Declare the maximum size of the string

void main()
{
    char str[str_size];
    int i, num_words;
	
     	
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);	// takes the input string
	
    i = 0;
    num_words = 1;

    /* loop till end of string */
    
    while(str[i]!='\0')
    {
        /* check whether the current character is white space or new line or tab character*/
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            num_words++;
        }

        i++;
    }

    printf("Total number of words in the string is : %d\n", num_words-1);
}
