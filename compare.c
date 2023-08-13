#include <stdio.h>
#include <cs50.h>
int main() {

    string y = get_string("y: ");
    string o = get_string("o: ");

    if (y == o) {
        printf("\nSon Iguales\n\n");
    }
    else {
        printf("\nSon diferentes\n\n");
    }
}