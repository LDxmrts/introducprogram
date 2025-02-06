#include <stdio.h>



int main (){

    //Numeros com Arrays
    int numeros[5] = {10, 20, 30, 40, 50};

    printf ("O primeiro elemento é: %d\n", numeros[0]);
    printf ("O segundo elemento é: %d\n", numeros[1]);
    printf ("O terceiro elemento é: %d\n", numeros[2]);
    printf ("O quarto elemento é: %d\n", numeros[3]);
    printf ("O quinto elemento é: %d\n", numeros[4]);

    //Caracteres com Arrays

    char letras[4] = {'A', 'B', 'C', 'D'};

    printf ("Primeira letra: %c\n", letras[0]);
    printf ("Segunda letra: %c\n", letras[1]);
    printf ("Terceira letra: %c\n", letras[2]);
    printf ("Quarta letra: %c\n", letras[3]);

    //Loop e string com Arrays

    char *nomes[] = {"Alice", "Bob", "Carol"};
    int i;

    for (i = 0; i < 3; i++){

        printf ("%s\n", nomes[i]);


    }


}