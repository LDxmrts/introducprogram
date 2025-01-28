#include <stdio.h>

int main (){

    int a = 10;
    float b = 3;
    float resultado = a + b; //a é convertido implicitamente para float
    unsigned long int populacao2 = 500000000;
    float pib2 = 2000000000000;
    float densidadePopulacional2;


    densidadePopulacional2 = pib2 / (float)populacao2;

    printf ("Densidade populacional: %.2f\n", densidadePopulacional2);



    printf ("Resultado: %.2f\n", resultado);

    int c = 10;
    int d = 3;
    float quociente = (float) a / b; //a é explicitamente convertido para float

    printf ("Quociente: %.2f\n", quociente);

}