#include <cs50.h>
#include <stdio.h>

int get_negative(void);

int main(void)
{
    int n = get_negative();
    printf("\n\tgracias\n");
}


///////////////////////////////////////////////////////////


int get_negative(void)
{
    int n;
    do
    {
        n = get_int("Poné un número negativo: ");
    }
    while (n > -1);
    return n;
}