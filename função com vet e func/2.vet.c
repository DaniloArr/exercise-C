#include <stdio.h>

int dim = 2, i;

void intercala(int dim, int v1[], int v2[], int v3[])
{

    for (i = 0; i < dim; i++)
    {
        v3[i * 2] = v1[i];
    }
    for (i = 0; i < dim; i++)
    {
        v3[i * 2 + 1] = v2[i];
    }
}

int main()
{
    int v1[dim], v2[dim], v3[dim * 2];

    //ler valores para o primeiro vetor
    for (i = 0; i < dim; i++)
    {
        printf("Digite um valor para o vetor 1: ");
        scanf("%i", &v1[i]);
    }

    //ler valores para o segundo vetor
    for (i = 0; i < dim; i++)
    {
        printf("Digite um valor para o vetor 2: ");
        scanf("%i", &v2[i]);
    }

    intercala(dim, v1, v2, v3);

    printf("\nVetor 1: ");
    for (i = 0; i < dim; i++)
    {
        printf("%i ", v1[i]);
    }
    printf("\n");

    printf("Vetor 2: ");
    for (i = 0; i < dim; i++)
    {
        printf("%i ", v2[i]);
    }
    printf("\n");

    printf("\nVetor 3: ");
    for (i = 0; i < dim * 2; i++)
    {
        printf("%i ", v3[i]);
    }
}