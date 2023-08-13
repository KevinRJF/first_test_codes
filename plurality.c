#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define MAX 9

bool voto(string nombre);
void ganador();

typedef struct { //aqui se define que cada candidato tiene nombre y voto
    string nombre;
    int voto;
}
candidatos;

candidatos candidato[MAX]; //array de MAX número de candidatos

int numero_candidatos;

int main(int argc, string argv[]) {

    if (argc < 2) {
        printf("\nUso: plurality [candidato #1, #2,...]\n\n");
        return 1;
    }

    numero_candidatos = argc - 1; //excluye el nombre del programa y solo incluye los candidatos prompteados

    if (numero_candidatos == 1) {
        printf("\nDebes agregar más de un candidato a la votación\n\n");
        return 2;
    }

    if (numero_candidatos > MAX) {
        printf("\nEl número máximo de candidatos es %i\n\n", MAX);
        return 3;
    }

    //por cada número de candidato, agregarle un nombre y voto
    for (int i = 0; i < numero_candidatos; i++) {
        candidato[i].nombre = argv[i + 1]; //asignar en el loop que cada argv es un nombre más a agrupar en candidatos excepto el nombre del programa
        candidato[i].voto = 0; //por ahora se le asigna sin número de votos
    }

    int numero_votos = get_int("Número de votos: ");

    //por cada número de votos prompteados, generar un pedido de voto
    for (int i = 0; i < numero_votos; i++) {
        string nombre = get_string("Voto: ");

        if (!voto(nombre)) { //si el bool de la función de voto es falso
            printf("\nVoto Inválido, inicia de nuevo\n\n");
            return 4;
        }
    }
    ganador(); //funcion custom
}

bool voto(string nombre) { //compara los nombres para que equivalgan entre el get_string y el argv
    for (int i = 0; i < numero_candidatos; i++) {
        if (strcmp(candidato[i].nombre, nombre) == 0) { //compara nombre prompteado con voto prompteado
            candidato[i].voto++;
            return true;
        }
    }
    return false;
}

void ganador() {

    int voto_max = 0;

    //si un voto de candidato es mayor a voto_max, este se actualiza
    for (int i = 0; i < numero_candidatos; i++) {
        if (candidato[i].voto > voto_max) {
            voto_max = candidato[i].voto;
        }
    }

    //el o los que tengan mayor número de votos serán printeados
    for (int i = 0; i < numero_candidatos; i++) {
        if (candidato[i].voto == voto_max) {
            printf("%s\n", candidato[i].nombre);
        }
    }
    return;
}