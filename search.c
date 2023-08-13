#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main() {

string palabra[] = {"yo", "no se", "mañana"};

string s = get_string("pone algo: ");

for (int i = 0; i < 3; i++) {
    if (strcmp(palabra[i], s) == 0) {
        printf("\nEncontrado\n\n");
        return 0;
    }
}
printf("\nNo encontrado\n\n");
return 1;
}