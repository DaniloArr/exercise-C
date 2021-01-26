#include <stdio.h>

void trocas(int *A, int *B)
{
    int Z;

    Z = *A;
    *A = *B;
    *B = Z;
}

int main()
{
    int trocA, trocB;
    printf("Digite um valor para A: ");
    scanf("%i", &trocA);
    printf("Digite um valor para B: ");
    scanf("%i", &trocB);

    trocas(&trocA, &trocB);

    printf("O novo valor de A: %i\n", trocA);
    printf("O novo valor de B: %i\n", trocB);
}