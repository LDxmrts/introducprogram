#include <stdio.h>



int main() {

    /*
    Incremento (++)
    Pós-Incremento a++
    Pré-Incremento ++a
    Decremento (--)
    Pós-Decremento a--
    Pré-Decremento --a
    
   
   //Incremento
   int numero1 = 1;
   printf ("Antes do incremento: %d\n", numero1);
   numero1++;
   printf ("Depois do incremento: %d\n", numero1);

   //Decremento
   int numero2 = 5;
   printf ("Antes do decremento: %d\n", numero2);
   numero2--;
   printf ("Depois do decremento: %d\n", numero2);
*/
   int numero3 = 5;
   printf ("Valor inicial: %d\n", numero3);
   int resultado;
   resultado = ++numero3;
   printf ("Depois do pré-incremento: %d\n Resultado: %d\n", numero3, resultado);
   resultado = numero3++;
   printf ("Depois do pós-incremento: %d\n Resultado: %d\n", numero3, resultado);

   
   resultado = --numero3;
   printf ("Após o pré-decremento: %d\n Resultado: %d\n", numero3,resultado);
   resultado = numero3--;
   printf ("Após o pós-decremento: %d\n Resultado: %d\n", numero3,resultado);

}
