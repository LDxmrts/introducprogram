#include <stdio.h>


int main() {


    int i = 0;
    int j = 0;

    //Números pares
    while (i <= 10){

        if (i % 2 == 0){

            printf ("O número %d é par!\n", i);

        } 
        i++;
    }

    //Números ímpares
    while (j <= 10){

        if (j % 2 != 0){

            printf ("O número %d é impar\n", j);

        }
        j++;

    }

}