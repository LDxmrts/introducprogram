#include <stdio.h>



int main (){

    int idade;
    float renda;


    printf ("Digite a sua idade: \n");
    scanf ("%d", &idade);
    printf ("Digite a sua renda mensal: \n");
    scanf ("%f", &renda);


    if (idade <= 18 || idade >=60)
    {
        if (renda < 2000)
        {
            printf ("Você atende a todos os critérios\n");

        } else {

            printf ("Você não atende ao critério renda\n");

        }
        

    } else {

        printf ("Você não atende ao critério idade\n");

    }

}