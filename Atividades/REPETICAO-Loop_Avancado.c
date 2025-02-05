#include <stdio.h>



int main (){

    for(int i = 0, j = 10; i < j; i++, j--){

        printf ("i = %d, j = %d \n", i, j);


    }
    for (int k = 0, l = 10; k < 5 && l > 5; k++, l--){
        printf("k = %d, l = %d\n", k, l);

    }
    for (int m = 0; m < 100; m += (m % 2 == 0) ? 1 : 2) {
        printf("%d \t", m);

    }
    for (int n = 0; n < 10; n++) {
        if (n == 5) continue; // Pula a iteração quando i é 5
        if (n == 8) break;    // Sai do loop quando i é 8
        printf("%d ", n);
    }








}