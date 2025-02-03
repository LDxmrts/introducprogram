#include <stdio.h>


int main () {

    
    for (int i = 1; i <=10; i++){



        printf ("%d\n", i);



    }
    //numeros pares
    for (int j = 1; j <= 20; j++){
        if (j % 2 == 0){

            printf ("Números pares entre 1 e 20: %d\n", j);


        }

    //incremento de 10 em 10
    for (int k = 0; k <=100; k += 10){
        printf ("%d\n", k);

    }

    //Decremento de 10 em 10
    for (int l = 100; l >= 0; l -= 10){

        printf ("%d\n", l);



    }

    }


}