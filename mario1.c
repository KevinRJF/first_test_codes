#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n, i;
    do
    {
        n = get_int("Tamaño: ");
    }
    while (n < 1);

    for (i = 0; i < n; i++)
    {
        printf("#");
    }

    printf("\n");
}