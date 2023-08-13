#include <cs50.h>
#include <stdio.h>

void dibujar(int n);

int main(void)
{
    int altura = get_int("Altura: ");

    dibujar(altura);
}

void dibujar(int n)
{
    if (n <= 0)
    {
        return;
    }

    dibujar(n - 1);

    // se realiza cuando dibujar deja de llamarse a si mismo
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}