#include <stdio.h>
#include <stdlib.h> 

char $$array_clone(char **strs,int n){

    char **clone = malloc(sizeof(char *) * n); //allocate memory for the array of strings
    int i = 0;
    for (i = 0; i < n; i++){ //iterate through the array
        int j = 0;

        while (j < n) {
            j++;
        }

    }
    int j = 0 ;

    clone[i] = malloc(sizeof(char) * j); 
    
    for (int k = 0; k < j; k++){ //iterate through the string
        clone[i][k] = strs[i][k]; //copy the character
    }
}
