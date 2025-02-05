#include <stdio.h>

void recursivo(int numero){

    if (numero > 0){

        printf ("%d \n", numero);

        recursivo(numero - 1);

    }

}

void imprimirMensagem(){

    printf ("Olá, mundo!\n");

}

int main(){

    int quantidade = 10;

    printf ("Contagem regressiva...");
    recursivo (quantidade);


    imprimirMensagem();

}

