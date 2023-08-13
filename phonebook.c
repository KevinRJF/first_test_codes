#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define MAX 2

typedef struct{
    string nombre;
    string numero;
    string dir;
}
gente;

int main() {

    gente persona[MAX];

    persona[0].nombre = "Kevin";
    persona[0].numero = "+1-617-495-1000";
    persona[0].dir = "Pennsylvania";

    persona[1].nombre = "Elena";
    persona[1].numero = "+1-949-468-2750";
    persona[1].dir = "Taiwan";

    string ingresar = get_string("Ingresa Nombre: ");

    for (int i=0; i < 2; i++) {
        if (strcmp(persona[i].nombre, ingresar) == 0) {
            printf("\nEncontrado: %s, %s\n\n", persona[i].numero, persona[i].dir);
            return 0;
        }
    }
    printf("\nNo encontrado\n\n");
    return 1;
}