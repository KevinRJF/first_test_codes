#include <string.h>
#include <stdio.h>

int main(){

    char Input[24];
    int Invalid = 1;

    do {
       // Prompts the user to make a selection & retrieve the input selection.
        printf("\n User Selection :\t");
        scanf("%s",  Input);

       // Checks the user's selection against the valid selections
        if(strcmp(Input,"no") == 0) {
            printf("\n ok\n");
            Invalid = 0; // do while loop test condition is set to false
        }
        else if(strcmp(Input,"sex") == 0) {
            printf("\n ahuevo\n");
            Invalid = 0;

        }else {
            // the loop continues
            printf("\nIncorrecto, intenta de nuevo\n");
        }
    }
    while(Invalid);
    return 0;
}
