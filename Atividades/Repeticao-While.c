#include <stdio.h>


int main (){


    int i = 1;
    int num;
    while (i <= 5){

        printf ("%d\n", i);
        i++;

    }
 
    printf("Digite um número (negativo para sair): ");
    scanf("%d", &num);
   
    while (num >= 0) {
        printf("Você digitou: %d\n", num);
       
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &num);
    }
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;






}