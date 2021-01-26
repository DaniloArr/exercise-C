#include <stdio.h>

int k;
int pares(int vetor[], int n)
{
    int j;

    for (k = 0; k < n; k++)
    {
        if (vetor[k] % 2 == 0)
        {
            j++;
            printf("\nEsse numero eh par(es):%i", vetor[k]);
        }
    }
    printf("\n\nTem %i numero(s) par(es).\n", j);
}

int main()
{
    int n;
    int vetor[n];

    printf("\nDigite a quantidade de numeros desejados:");
    scanf("%i", &n);

    for (k = 0; k < n; k++)
    {
        printf("Digite um numero[%i]: ", k + 1);
        scanf("%i", &vetor[k]);
    }

    pares(vetor, n);
}
