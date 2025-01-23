#include <stdio.h>



int main (){
    //Inteiro
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b;
    
    printf ("Soma: %d\n",soma);
    printf ("Diferença: %d\n",diferenca);
    printf ("Produto: %d\n",produto);
    printf ("Quociente: %d\n",quociente);

    //Ponto flutuante 
    float c = 5.5;
    float d = 2.2;
    float soma1 = c + d;
    float diferenca1 = c - d;
    float produto1 = c * d;
    float quociente1 = c / d;
    
    printf ("Soma: %.2f\n",soma1);
    printf ("Diferença: %.2f\n",diferenca1);
    printf ("Produto: %.2f\n",produto1);
    printf ("Quociente: %.2f\n",quociente1);
}