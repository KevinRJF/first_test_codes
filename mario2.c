#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n, i, j;

    while (true)
    {
        n = get_int("Tamaño del cubo: ");
        if (n > 0)

        break;
    }

    for(i = 0; i < n; i++) //para agregar ileras
    {
        for(j = 0; j < n; j++) //para agregar columnas
        {
        printf("#"); //poner un "#"
        }
        printf("\n"); //mover a siguiente ilera
    }
}