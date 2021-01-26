#include <stdio.h>

int soma(int vet[], int tam)
{

    if (tam == 1)
    {
        return vet[0];
    }
    else
    {
        return vet[tam - 1] + soma(vet, tam - 1);
    }
}

int prod(int vet[], int tam)
{

    if (tam == 1)
    {
        return vet[0];
    }
    else
    {
        return vet[tam - 1] * prod(vet, tam - 1);
    }
}

int main()
{
    int Soma, Prod;
    int vet[4] = {2, 3, 5, 15};

    Soma = soma(vet, 4);
    Prod = prod(vet, 4);

    printf("\nSoma: %i \n", Soma);
    printf("Produto: %i \n", Prod);
    printf("\n");
}