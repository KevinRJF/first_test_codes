#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
int main(void)

{
    int clave = 2005;
    string prompt = get_string("cual es la clave\n");
    int answer = atoi(prompt); //vuelve compatibles los 2 ints

    if (answer == clave)
    {
    printf("correcto\n");
    }

    else
    {
    printf("incorrecto\n");
    }

}