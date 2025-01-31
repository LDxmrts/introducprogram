#include <stdio.h>



int main (){

    int opcao;
    float nota1, nota2, media;


    printf ("***** MENU DE GERENCIAMENTO DE ESTUDANTES *****\n");
    printf ("1. Calcular Média\n");
    printf ("2. Determinar Status\n");
    printf ("3. Sair\n");
    printf ("Escolha uma opção:\n");
    scanf ("%d", &opcao);




    switch (opcao)
    {   

        case 1:
        printf ("Calcular a Media\n");
        printf ("Digite a primeira nota\n");
        scanf ("%f", &nota1);
        printf ("Digite a segunda nota\n");
        scanf ("%f", &nota2);

        //Testar a condição se a nota é maior ou igual a 0 e menor ou igual a 10

        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <=10)){
            
            media = (nota1+nota2)/2;
            printf ("A sua média é: %.2f\n", media);

        } else {

            printf ("Pelo menos uma das entradas está errada\n");

        }
        break;
        case 2:
        printf ("Determinar status\n");
        printf ("Digite a sua média:\n");
        scanf ("%f", &media);

        if (media >= 11 || media < 0){

            printf ("Valor da média inválido.\n");

        }else if (media == 5 || media == 6){

            printf ("Você está em recuperação\n");

        }else{
            
            media >= 7 ? printf ("Aprovado!\n") : printf ("Reprovado!\n");

        }
        break;
        case 3:
        printf ("Saindo do programa\n");
        break;

        default:
        printf ("Opção inválida!");
   
    } 
}