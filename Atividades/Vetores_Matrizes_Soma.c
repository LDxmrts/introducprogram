#include <stdio.h>



int main (){

    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int matrizSoma[2][2];


    //Somando as duas matrizes

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){

            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];

        }
        }

    //Exibindo a matriz resultado

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){

            printf ("matrizSoma[%d][%d] = %d\n", i, j, matrizSoma[i][j]);


        }
    }

    int vetor [5] = {1, 2, 3, 4, 5};
    int soma = 0;


    //Calculando a soma dos elementos do vetor

    for (int k = 0; k < 5; k++){

        soma+= vetor[k];

    }

    printf ("A soma dos elementos do vetor é: %d\n", soma);



}