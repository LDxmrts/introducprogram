#include <stdio.h>

int main (){

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    //Entrada de dados
    printf ("Digite o valor do número 1\n");
    scanf ("%d", &numero1);
    printf ("Digite o valor do número 2\n");
    scanf ("%d", &numero2);

    //Operação Soma
    soma = numero1 + numero2;
    //Operação subtração
    subtracao = numero1 - numero2;
    //Operação multiplicação
    multiplicacao = numero1 * numero2;
    //Operação divisão
    divisao = numero1 / numero2; 

    printf ("A Soma é: %d\n A Subtração é: %d\n A Multiplicação é: %d\n A Divisão é: %d\n", soma, subtracao, multiplicacao, divisao);


}