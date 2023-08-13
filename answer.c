#include <cs50.h>
#include <stdio.h>

int main(void)

{
    string answer, answer2;
    int answer3;

    answer = get_string("Cual es tu nombre? ");
    printf("Que onda, %s\n", answer);

    answer2 = get_string("¿Te gusta el Latte? ");
    printf("Que bueno que %s\n", answer2);

    answer3 = get_int("dame un numero del 1 al 18 ");
    printf("en base a lo que pusites, esa es tu edad, osea, %i\n", answer3);
}
