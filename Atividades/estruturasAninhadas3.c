#include <stdio.h>



int main () {

    int numero;

    printf ("Digite um número:\n ");
    scanf ("%d", &numero);

    if (numero % 2 == 0)
    {
        printf ("Número é par\n");
    } else if (numero == 0) {
        printf ("Número é 0\n");
    } else {
        printf ("Número impar\n");
    }
}