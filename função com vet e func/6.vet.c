#include <stdio.h>

void diag(int m[][5], int tam, int vet[])
{
    for (int l = 0; l < tam; l++)
    {
        for (int c = 0; c < tam; c++)
        {
            if (l == c)
            {
                vet[l] = m[l][c];
            }
        }
    }
}

int main()
{
    int m[5][5], vet[5];

    for (int l = 0; l < 5; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("Digite o valor da posicao [%i][%i]: ", l, c);
            scanf("%i", &m[l][c]);
        }
    }

    diag(m, 5, vet);

    printf("\nOs valores da diagonal principal sao: ");
    for (int l = 0; l < 5; l++)
    {
        printf("%i ", vet[l]);
    }
    printf("\n");
}