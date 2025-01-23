#include <stdio.h>



int main() {

    float media;
    int nota1, nota2, nota3;
    printf ("*** Programa de Cálculo de Média ***\n");


    printf ("Digite sua primeira nota: \n");
    scanf ("%d", &nota1);
    printf ("Digite sua segunda nota: \n");
    scanf ("%d", &nota2);
    printf ("Digite sua terceira nota: \n");
    scanf ("%d", &nota3);

    media = (float)(nota1+nota2+nota3)/3;

    printf ("Sua média é: %.2f", media);

}