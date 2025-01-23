#include <stdio.h>

int main (){

    int a = 10;
    float b = 3;
    float resultado = a + b; //a é convertido implicitamente para float

    printf ("Resultado: %.2f\n", resultado);

    int c = 10;
    int d = 3;
    float quociente = (float) a / b; //a é explicitamente convertido para float

    printf ("Quociente: %.2f\n", quociente);

}