#include <stdio.h>


int main (){

    int idade, dependentes;
    float renda;

    printf ("Digite a sua idade: \n");
    scanf ("%d", &idade);
    printf ("Digite o número de dependentes: \n");
    scanf ("%d", &dependentes);
    printf ("Digite a sua renda: \n");
    scanf ("%f", &renda);


    if (idade >= 18 && idade <65)
    {
        if (renda < 3000)
        {
            if (dependentes >2)
            {
                printf ("Você atende a todos os critérios");

            }  else {

                printf ("Você não atende ao critério dependentes\n");
            }
        } else {
            printf ("Você não atende ao critério renda");

        }

    } else {

        printf ("Você não atende ao critério idade\n");

    }

}