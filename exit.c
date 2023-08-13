#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("\nMissing command-line argument\n\n");
        return 1;
    }
    printf("\nHello, %s\n\n", argv[1]);
    return 0;
}