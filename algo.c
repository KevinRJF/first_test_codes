#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(){

    string n = "HI!";
    int len = strlen(n);

    for (int i = 0; i < len; i++) {
        printf("%c%c%c%c%c%c\n", n[0], n[1], n[2], n[3], n[4], n[5]);
    }
}