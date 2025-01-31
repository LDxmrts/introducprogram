#include <stdio.h>




int main()
{

    int idade = 20, temperatura = 28, num1 = 40, num2 = 60, maior;
    int resultado1, resultado2;


    resultado1 = idade >= 18 ? 1 : 0;

    if (resultado1 == 1){
    printf ("Você é maior de idade\n");
    } else{
    printf ("Você é menor de idade\n");
    }

    resultado2 = temperatura > 30 ? 1 : 0;

    if (resultado2 == 1){
    printf ("Está calor\n");

    }else{

    printf("Está frio\n");
    }

    num1 > num2 ? (maior = num1) : (maior = num2);

    printf ("O número maior é: %d\n", maior);






    
}