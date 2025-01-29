#include <stdio.h>



int main () {

   int a = -10, b = 5, c = 10, d = -5, e = 10, f = -10;

   if (a > 0 && b > 0){

    printf ("Os dois números são positivos\n");

   } else {

    printf ("Pelo menos um dos números é negativo\n");

   } 

      if (c > 0 || d > 0){

    printf ("Pelo menos um dos números é positivo\n");

   } else {

    printf ("Os dois números são negativos\n");

   } 

    if (!e) {

        printf ("a é zero.\n");

    } else {

        printf ("A variável é diferente de zero\n");

    }

    if (!(f > 0)){

        printf ("A variável é negativa\n");

    } else {

        printf ("A variável é positiva\n");

    }

}