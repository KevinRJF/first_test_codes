#include <stdio.h>
#include <cs50.h>

int longitud(string n); // aqui está la función custom abreviada

int main(void) // esté es la función *main*
{
    string n = get_string("\nNombre: ");
    int l = longitud(n);
    printf("\n'%s' tiene %i letras\n\n", n, l);
}


// función custom que será teletransportada a la función main:

int longitud(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}