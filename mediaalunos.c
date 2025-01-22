#include <stdio.h>

int main(){

    int idade, matricula;
    float altura;
    char nome[50];

    printf ("Digite seu nome\n");
    scanf ("%s", &nome);
    printf ("Digite sua matrícula\n");
    scanf ("%d", &matricula);
    printf ("Digite sua idade\n");
    scanf ("%d", &idade);
    printf ("Digite sua altura\n");
    scanf ("%f", &altura);

    printf ("Nome do Aluno: %s \n", nome);
    printf ("Matrícula do Aluno: %d \n", matricula);
    printf ("Idade do Aluno: %d \n", idade);
    printf ("Altura do Aluno: %.2f \n", altura);

    return 0;

}