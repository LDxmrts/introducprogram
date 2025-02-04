#include <stdio.h>



int main (){
    
    //Loop com  while
    int i = 1;
    while (i <= 10){ //Loop externo

    int j = 1;
     while (j <= 10){ //Loop interno

        printf ("%d\t", i * j);
        j++; //Incremento loop interno

     }
    printf ("\n");
    i++; //Incremento loop externo
    }


    //Loop com Do While
    int k = 1;
    do {    //Loop externo
        int l = 1;  //Variável local
        do{  //Loop interno

        printf ("%d\t", k * l);
        l++;    //Incremento loop interno

        }while (l <= 10);   //Condição interna
        printf ("\n");
        k++;


    } while (k <= 10); //Condição externa


    //Loop com for
    int m = 1;
    while (m <= 10){    //Loop externo

        int n = 1; //Variável local
        while (n <= 10){ //Loop interno

        printf ("%d\t", m * n);
        n++;
        }
        printf ("\n");
        m++;

    }

}