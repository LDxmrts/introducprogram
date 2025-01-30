#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main (){

    int opcao, regras;
    int numeroSecreto, palpite;

    printf ("***Menu Principal***\n");
    printf ("1. Iniciar Jogo\n");
    printf ("2. Ver Regras\n");
    printf ("3. Sair\n");
    printf ("Escolha uma opção:\n");
    scanf ("%d", &opcao);

    switch (opcao)
    {
        case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf ("Digite um número de 0 a 9\n");
        scanf ("%d", &palpite);
        if (numeroSecreto == palpite){

            printf ("Você acertou!\n");

        } else if (palpite > 9 || palpite < 0) {

            printf ("Opção inválida!\n");

        } else{

            printf ("Você errou!\n");

        }
        printf ("Numero secreto: %d\n", numeroSecreto);
        break;
        case 2:
        printf ("Digite a opção referente a regra que deseja ler\n");
        scanf ("%d", &regras);
        switch (regras)
        {
            case 1:
            printf ("Regra 1\n");
            break;
            case 2:
            printf ("Regra 2\n");
            break;
            case 3:
            printf ("Regra 3\n");
            break;
            default:
            printf ("Opção inválida!");

        }
        break;
        case 3:
        printf ("Jogo encerrado.\n");
        break;
        default:
        printf ("Opção inválida!\n");

    }


}

