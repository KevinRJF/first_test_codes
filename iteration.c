#include <stdio.h>
#include <cs50.h>

void dibujar(int n);

int main() {

    int altura = get_int("Altura: ");
    dibujar(altura);
}

void dibujar(int n) {

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }
        printf("\n");
    }
}