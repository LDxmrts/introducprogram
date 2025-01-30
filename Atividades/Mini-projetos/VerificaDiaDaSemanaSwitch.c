#include <stdio.h>


int main (){

    int diaSemana;

    printf ("Digite um número de 1 a 7\n");
    scanf ("%d", &diaSemana);

    switch (diaSemana){

        case 1:
        printf ("O dia é Segunda-feira\n");
        break;

        case 2:
        printf ("O dia é Terça-feira\n");
        break;

        case 3:
        printf ("O dia é Quarta-feira\n");
        break;

        case 4:
        printf ("O dia é Quinta-feira\n");
        break;

        case 5:
        printf ("O dia é Sexta-feira\n");
        break;

        case 6:
        printf ("O dia é Sábado\n");
        break;

        case 7:
        printf ("O dia é Domingo\n");
        break;

        default:
        printf ("Número inválido!");

    }

}