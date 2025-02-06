#include <stdio.h>


int main (){

    //Inicialização matrizes
    int matriz[3][3]; //Matriz de 3x3

    //Inicialização dos elementos da matriz
    matriz [0][0] = 1;
    matriz [0][1] = 2;
    matriz [0][2] = 3;
    matriz [1][0] = 4;
    matriz [1][1] = 5;
    matriz [1][2] = 6;
    matriz [2][0] = 7;
    matriz [2][1] = 8;
    matriz [2][2] = 9;

    //Acessando elementos da matriz

    printf ("O elemento na posição [0][0] é %d\n", matriz[0][0]);
    printf ("O elemento na posição [1][2] é %d\n", matriz[1][2]);

    //Matriz simplificada
    int matrizSimples[3][3] ={

        {1,2,3},
        {4,5,6},
        {7,8,9}

    };

    //Acessando elementos da matriz simplificada
    printf ("O elemento na posição [0][0] é %d\n", matrizSimples[0][0]);
    printf ("O elemento na posição [1][2] é %d\n", matrizSimples[1][2]);
    printf ("O elemento na posição [2][0] é %d\n", matrizSimples[2][0]);

}