#include <stdio.h>


int main (){

    int opcao;

    do {

        printf ("**** MENU ****\n");
        printf ("1. Opção 1\n");
        printf ("2. Opção 2\n");
        printf ("3. Opção 3\n");
        printf ("Escolha uma opção:\n");
        scanf ("%d", &opcao);


        switch (opcao){

            case 1:
            printf ("Você escolheu a opção 1\n");
            break;
            case 2:
            printf ("Você escolheu a opção 2\n");
            break;
            case 3:
            printf ("Você escolheu a opção 3\n");
            break;
        }

    } while (opcao <= 3);

    printf ("Opção inválida. Programa encerrado.\n");

}