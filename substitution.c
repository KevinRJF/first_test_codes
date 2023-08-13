#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
bool tiene_num(string key);
bool letras26(string key);
bool serepite(string key);

int main(int argc, string argv[])
{
    if(argc != 2) {
        printf("\nUso correcto: ./substitution <llave>\n\n");
        return 1;
    }

    string key = argv[1];
    int len, index;
    len = strlen(key);

    if (tiene_num(key)) {
        printf("\nLa llave debe ser de letras\n\n");
        return 1;
    }
    if (letras26(key)) {
        printf("\nLa llave debe de llevar 26 letras\n\n");
        return 1;
    }
    if (serepite(key)) {
        printf("\nNinguna letra debe repetirse\n\n");
        return 1;
    }

    string plain = get_string("plaintext: ");
    char cipher[len + 1];

    for (int i = 0; i < len; i++) {
        if (islower(plain[i])) {
            index = plain[i] - 97; // resta cada valor ascii por - 97
            cipher[i] = key[index];
            if (isupper(cipher[i])) {
                cipher[i] += 32;
            }
        }
        else if (isupper(plain[i])) {
            index = plain[i] - 65; // index es la resta de cada char de plain -65
            cipher[i] = key[index]; // cada char index se encifra
            if (islower(cipher[i])) {
                cipher[i] -= 32;
            }
        }
        else {
            cipher[i] = plain[i];
        }
    }
    cipher[len] = '\0';
    printf("ciphertext: %s\n\n", cipher);
}

bool tiene_num (string key)
{
    int len, i, j;

    len = strlen(key);

    for(i = 0; i < len; i++)
    {
        if(isalpha(key[i]))
        {
            return false;   //si algún char no es alphabetico
        }
    }
    return true;
}

bool letras26(string key)
{
    int len, i;

    len = strlen(key);

    for(i = 0; i < len; i++)
    {
        if(len == 26)
        {
            return false;
        }
    }
    return true;
}

bool serepite(string key)
{
    int len;
    len = strlen(key);

    for (int i = 0; i < len; i++)
    {
        key[i] = toupper(key[i]); //agranda para analizar equitativamente
    }

    for(int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if ((key[i]) == (key[j]))
            {
            return true;
            }
        }
    }
    return false;
}