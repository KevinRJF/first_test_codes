#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
bool solo_num(string text);
char rotate(char p, int k);
bool negative(string neg);

int main(int argc, string argv[])
{
    int key, len, i;
    string plain;

    if(argc != 2 || solo_num(argv[1]) || negative(argv[1]))
    {
        printf("\nUso correcto: ./caesar <número natural>\n\n");
        return 1;
    }

/////////////////////////////////////////////////////////////////

    key = atoi(argv[1]); //convierte el string en un int

    plain = get_string("plaintext: ");

    len = strlen(plain); //cuenta el num de caracteres de plain
    char cipher[len]; //genera chars según la longitud de plain

    for(i = 0; i < len; i++)
    {
        cipher[i] = rotate(plain[i], key);
    }
    cipher[len] = '\0'; //avisa cuando el string termina
    printf("ciphertext: %s\n\n", cipher);
    return 0;
}

////////////////////////////////////////////////////////////////
bool solo_num (string text)
{
    int len, i;

    len = strlen(text);

    for(i = 0; i < len; i++)
    {
        if(isdigit(text[i]))
        {
            return false;   //si algun char no es un número
        }
    }
    return true;
}

char rotate(char p, int key)
{
    char pi = '\0', ci, c;  //pi es la posición alfabética custom
    if(isupper(p))         //p es la posición ascii
    {
        pi = p - 65;
        ci = (pi + key)%26; //0 = a, 25 = z, 26 = a
        c = ci + 65;    // c es resultado final
    }
    else if(islower(p))
    {
        pi = p - 97;
        ci = (pi + key)%26;
        c = ci + 97;
    }
    else
    {
        return p;   //si el char no es ni may ni min, se deja igual
    }
    return c; //al final dar el result final a la función
}

bool negative(string neg)
{
    int len, i;

    len = strlen(neg);

    for(i = 0; i < len; i++)
    {
        if((neg[i]) == '-')
        {
            return true;
        }
    }
    return false;
}