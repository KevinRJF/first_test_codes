#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int n, i, c;
    while(true)
    {
        n = get_int("Tamaño: ");
        if ((n > 0) && (n < 11))
        break;
    }

    for (i = 0; i < n; i++)   //para numero de ileras
    {
        for (c = 0; c <= i; c++)
        {
                printf("#");
        }
        printf("\n");   //agregar linea despues de cada ilera
    }
}