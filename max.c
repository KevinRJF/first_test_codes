#include <stdio.h>
#include <cs50.h>

void analyzeNumber(int number) {
    if (number > 0) {
        printf("\n%i\n", number);
    } else if (number < 0) {
        printf("\nInvalid Input.\n\n");
        return; // Base case, number is zero so we exit recursion.
    }

    number = get_int("\nEnter another number: ");  // Prompt for another number
    analyzeNumber(number);  // Recursive call with the new number
}

int main(void) {
    int number = get_int("\nEnter a positive number: ");
    analyzeNumber(number);

    return 0;
}