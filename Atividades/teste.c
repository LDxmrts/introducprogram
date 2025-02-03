#include <stdio.h>

int main() {
    unsigned long int num,nam,compara;
    int selecao;
    
    printf("Digite um número: ");
    scanf("%lu", &num);  // Usando %lu para unsigned long int
    printf("Digite outro número: ");
    scanf("%lu", &nam);

    printf("Você digitou: %lu\n", num);
    printf("Você digitou: %lu\n", nam);

    printf ("Digite o número 1 para efetuar a comparação\n");
    scanf ("%d", & selecao);

    switch (selecao){

        case 1:

        compara = num > nam ? 1 : 0;

        if (num > nam){

            printf ("%lu é o maior\n", num);

        }else if (nam > num){

            printf ("%lu é maior\n", nam);

        } else {

            printf ("Os números são iguais");

        }

        default:

        printf ("Seleção é invalida");


    }
    
    return 0;
}
