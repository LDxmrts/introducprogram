#include <stdio.h>



int main (){

    int variavel;
    char variavel2;

    printf ("Digite um valor\n");
    scanf ("%d", &variavel);

    switch (variavel){

        case 1:

        printf ("Código a ser executado se variavel == 1\n");
        break;

        case 2:

        printf ("Código a ser executado se variável == 2\n");
        break;

        default:

        printf ("Número inválido\n");

    }

    printf ("Digite um valor\n");
    scanf ("%c", &variavel2);

    switch (variavel2)
    
    {

        case 'a':

        printf ("Código a ser executado se variavel == a");
        break;

        case 'b':

        printf ("Código a ser executado se variável == b");
        break;

        default:
        printf ("Variável inválida");


    }




}