#include <stdio.h>
 
int main() {

    //Inicialização condicional de uma matriz


    int matriz[3][3];
 
    // Inicialização da matriz com base em condições simples
    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 3; j++) {  // Loop interno para as colunas
            if (j % 2 == 0) {
                matriz[i][j] = 1; // Se a coluna for par, atribui 1
            } else {
                matriz[i][j] = 0; // Se a coluna for ímpar, atribui 0
            }
        }
    }
 
    // Impressão da matriz
    for (int i = 0; i < 3; i++) {      // Loop para imprimir cada linha
        for (int j = 0; j < 3; j++) {  // Loop para imprimir cada coluna
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

    //Modificação condicional de uma matriz
 
    int matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

     // Modificação condicional dos elementos da matriz
    for (int k = 0; k < 3; k++) {      // Loop externo para as linhas
        for (int l = 0; l < 3; l++) {  // Loop interno para as colunas
            if (matriz1[k][l] > 5) {
                matriz1[k][l] = -matriz1[k][l]; // Se o elemento for maior que 5, torna-o negativo
            }
        }
    }
    printf ("\n");

    // Impressão da matriz modificada
    for (int k = 0; k < 3; k++) {      // Loop para imprimir cada linha
        for (int l = 0; l < 3; l++) {  // Loop para imprimir cada coluna
            printf("%d ", matriz1[k][l]);
        }
        printf("\n");
    }

    //|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

    //Contagem condicional em uma matriz

    int matriz2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int evenCount = 0, oddCount = 0;

    // Contagem de elementos pares e ímpares
    for (int m = 0; m < 3; m++) {      // Loop externo para as linhas
        for (int n = 0; n < 3; n++) {  // Loop interno para as colunas
            if (matriz2[m][n] % 2 == 0) {
                evenCount++; // Incrementa o contador de pares
            } else {
                oddCount++; // Incrementa o contador de ímpares
            }
        }
    }
 
    printf ("\n");

    // Impressão dos resultados
    printf("Número de elementos pares: %d\n", evenCount);
    printf("Número de elementos ímpares: %d\n", oddCount);

}