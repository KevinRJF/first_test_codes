#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("\nInput: ");
    int longitud = strlen(s);
    printf("Lo q escribiste fue: ");

    for(int i=0; i < longitud; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}