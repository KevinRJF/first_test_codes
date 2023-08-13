#include <stdio.h>
#include <cs50.h>
int main(void)
{

    int s, e, x, o;
    while(true)
    {
        s = get_int("Tamaño: ");
        if ((s > 0) && (s < 31))
        break;
    }

    for (e = 0; e < s; e++)   //para agregar cada ilera (aqui empieza el ciclo XD)
    {
        for (o = 0; o < s - e - 1; o++)   //para numero de espacios por columna
        {
            printf(" ");
        }
        for (x = 0; x <= e; x++)   //para numero de ladrillos por columna
            {
                printf("#");
            }

        for (x = 0; x <= e; x++)    //empieza a hacer el lado derecho
        {
            printf("#");
        }
        printf("\n");   //agregar una linea despues de cada ilera hecha
    }
}
