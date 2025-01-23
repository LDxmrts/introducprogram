#include <stdio.h>


int main () {
/*
    Atribuição simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)

*/
   int numero1, numero2, resultado;
   resultado = 10;

   printf ("Resultado Inicialização: %d\n", resultado);
   //Soma
   resultado += 20;
   printf ("Resultado Soma: %d\n", resultado);

   //Subtração
   resultado -= 5;
   printf ("Resultado Subtração: %d\n", resultado);

   //Multiplicação
   resultado *= 5;
   printf ("Resultado Multiplicação: %d\n", resultado);

   //Divisão
   resultado /= 5;
   printf ("Resultado Divisão: %d\n", resultado);

}