#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int n, i, c, e;
    while(true)
    {
        n = get_int("Tamaño: ");
        if ((n > 0) && (n < 31))
        break;
    }

    for (i = 0; i < n; i++)   //si i < n, realiza lo de abajo
    {
        for (e = 0; e < n - i - 1; e++)   //agregar espacios
        {
            printf(" ");
        }
        for (c = 0; c <= i; c++)   //agregar hashes
            {
                printf("#");
            }

/////////////////////////////////////////////////////////////////
        printf(" ");

            printf("##");

        printf(" ");
/////////////////////////////////////////////////////////////////

        for (c = 0; c <= i; c++)
        {
            printf("#");
        }

        printf("\n");   //agregar linea y volver a realizar hasta que i = n
    }
}