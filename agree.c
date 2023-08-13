#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Estas de acuerdo? ");

    if (c == 'y' || c == 'Y')
    {
        printf("ok de acuerdo\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("ok en desacuerdo\n");
    }
}