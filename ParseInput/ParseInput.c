#include <stdio.h>
#include <string.h>

/*
Name: Parse Input
Author: Gus Guthrie
Version: 4/5/2018
Description:
*/

int main()
{
    /* Create array of characters */
    char input[BUFSIZ];
    int strLength = 0; /* temporary int for the length of the string */
    int numZero = 0; /* int to record the number of zeros */
    int numOne = 0; /* int to record the number of ones */

    strLength = strlen(input);
    
    /* go through the string and count the 0s and 1s */
    int i;
    for (i = 0; i < strLength; i = i+1)
    {
        if (input[i] == 0)
        {
            numZero = numZero + 1;
            //printf("zeros: %d", numZero);
        }//end if
        else if (input[i] == 1)
        {
            numOne = numOne + 1;
        }//end else if
    }//end for
       
    /* print the list size and the number of 0s and 1s */
    printf("The list size is: %d. \n The number of zeros is: %s. \nThe number of ones is: %d.", strLength, numZero, numOne);
      
    /* Set the temporary string length variable back to zero */
    strLength = 0;

}//end main
