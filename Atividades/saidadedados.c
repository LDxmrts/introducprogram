#include <stdio.h>


int main(){

    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "lucas";
    unsigned long int populacao1 = 4294967295;
    printf("Idade: %d\n", idade);
    printf ("Altura: %f\n", altura);
    printf ("Opção: %c\n", opcao);
    printf ("Nome: %s\n", nome);
    printf ("Valor: %lu\n", populacao1);
/*
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.
%u: unsigned int
%ld: long int
%lld: long long int
*/
}