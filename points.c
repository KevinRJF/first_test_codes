#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int YO = 2;
    int points = get_int("cuantos puntos perdiste mae? ");

    if (points < YO)
    {
        printf("perdiste menos puntos que yo xd\n");
    }
    else if (points > YO)
    {
        printf("perdiste más puntos que yo xd\n");
    }
    else //no es necesario poner (x == y)
    {
        printf("perdimos la misma cantidad de puntos XD\n");
    }
}