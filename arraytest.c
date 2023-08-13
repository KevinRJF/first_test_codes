#include <stdio.h>
#include <cs50.h>

int main(void)
{
  printf("\nBienvenido a la calculadora de promedio de 4 cortes\n\n");

  int num = 4;
  int s[num];

    for (int i = 0; i < num; i++) //genera 4 prompts de score
    {
      s[i] = get_float("Ingresa score: ");
    }
    printf("Promedio total: %.2f\n", (s[0]+s[1]+s[2]+s[3]+s[4]) / 4.00);
}