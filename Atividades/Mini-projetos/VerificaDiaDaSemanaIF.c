#include <stdio.h>



int main () {

    int diaSemana;

    printf ("Digite um número de 1 a 7\n");
    scanf ("%d", &diaSemana);

    if (diaSemana == 1){

        printf ("O dia correspondente é Segunda-feira\n");

    } else if (diaSemana == 2){

        printf ("O dia correspondente é Terça-feira\n");
    }
    else if (diaSemana == 3){

        printf ("O dia correspondente é Quarta-feira\n");
    }
    else if (diaSemana == 4){

        printf ("O dia correspondente é Quinta-feira\n");
    }
    else if (diaSemana == 5){

        printf ("O dia correspondente é Sexta-feira\n");
    }
    else if (diaSemana == 6){

        printf ("O dia correspondente é Sábado\n");
    }
    else if (diaSemana == 7){

        printf ("O dia correspondente é Domingo\n");
    } else {

        printf ("Número inválido!");
    }
    







}