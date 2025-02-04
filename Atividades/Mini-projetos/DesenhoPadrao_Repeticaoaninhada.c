#include <stdio.h>



int main (){


    int n = 10; //Altura do triângulo
/*

    for (int i = 1; i <= n; i++){ //Loop externo

        for (int j = 1; j <= i; j++){ //Loop interno

        printf ("*");

        }

        printf("\n");

    }
*/

    for (int k = 1; k <=5 ; k++){

        for (int l = 1; l <= 5; l++){

            if ((k + l) % 2 == 0){

                printf ("(%d, %d)\n", k, l);


            }

        }

    }





}