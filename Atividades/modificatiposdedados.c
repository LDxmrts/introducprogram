#include <stdio.h>


int main() {

    int numeroSinal = 3000000000;
    unsigned int numeroSemSinal = 3000000000;

    printf ("Número com sinal: %d\n", numeroSinal);
    printf ("Número sem sinal: %u\n", numeroSemSinal);

    int numeroNormal = 2147483647;
    long int numeroGrande = 2147483647;

    printf ("Número regular (int): %d\n", numeroNormal);
    printf ("Número grande (long int): %ld\n", numeroGrande);

    numeroGrande = 2147483648;
    printf("Número grande atualizado (long int): %ld\n", numeroGrande);

    double numeroPreciso = 3.14159265358979;
    long double numeroMuitoPreciso = 3.141592653589793238463;

    printf ("Número preciso (double): %.15f\n", numeroPreciso);
    printf ("Número muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);

    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long int numeroGrandeLongo = 4000000000;
    int numero = 4000000000;

    printf ("Número positivo grande(Unsigned Long Int): %lu\n", numeroGrandePositivo);
    printf ("Número positivo (Unsigned Int): %u\n", numeroPositivo);
    printf ("Número grande(Long Int): %ld\n", numeroGrandeLongo);
    printf ("Número int(Int): %d\n", numero);

    short int numeroPequeno = 32767;
    printf ("Número pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768;
    printf ("Número pequeno atualizado (short int): %d\n", numeroPequeno);


    /*
    printf("Tamanho de Int: %u bytes\n", sizeof(int));
    printf("Tamanho de Long Int: %u bytes\n", sizeof(long int));
    printf("Tamanho de Long Long Int: %u bytes\n", sizeof(long long int));
    printf("Tamanho de Double: %u bytes\n", sizeof(double));
    printf("Tamanho de Long Double: %u bytes\n", sizeof(long double));
    */
}