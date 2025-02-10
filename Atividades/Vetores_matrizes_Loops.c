#include <stdio.h>



int main (){

    int vetor[5]; //Declaração de um vetor de 5 inteiros


    //Inicialização do vetor usando uma estrutura de repetição

    for (int i = 0; i < 5; i++){

        vetor[i] = i * 2; //Atribuindo valores ao vetor

    }

    //Exibindo os elementos do vetor usando uma estrutura de repetição for

    for (int i = 0; i < 5; i++){

        printf ("vetor[%d] = %d\n", i, vetor[i]);

    }

    int matriz [3][3]; //Declaração de uma matriz 3x3 de inteiros

        // Inicialização da matriz usando estruturas de repetição for aninhadas
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            matriz[j][k] = j + k; // Atribuindo valores à matriz
        }
    }
 
    // Exibindo os elementos da matriz usando estruturas de repetição for aninhadas
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            printf("matriz[%d][%d] = %d\n", j, k, matriz[j][k]);
        }
    }

}