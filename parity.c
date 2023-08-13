#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int ("n: ");

    if (n % 2 == 0) //formula matematica para calcular numero par
    {
        printf("par\n");
    }
    else
    {
        printf("impar\n");
    }
}