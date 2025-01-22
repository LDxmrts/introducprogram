#include <stdio.h>


int main (){

    int idade;
    float altura;
    char opcao = 's';
    char nome[20];
    //printf ("Idade antes: %d\n", idade);
    printf ("Entre com sua idade e altura\n");
    scanf ("%d %f", &idade, &altura);
//  printf ("Entre com sua altura\n");
//  scanf ("%f", &altura);
    printf ("Entre com a opção\n");
    scanf (" %c", &opcao);
    printf ("Entre com seu nome\n");
    scanf (" %s", &nome);
    printf ("Sua Idade: %d\n", idade);
    printf ("Sua Altura: %f\n", altura);
    printf ("Sua Opção: %c\n", opcao);
    printf ("Seu nome: %s\n", nome);
    }
