#include <stdio.h>

void calc(int m[][3], int z, int *maior)
{
    int L = 0, C = 0;

    printf("\n\n");
    for (L = 0; L < z; L++)
    {
        for (C = 0; C < 3; C++)
        {
            if (m[L][C] > *maior)
            {
                *maior = m[L][C];
            }
        }
    }
}

int main()
{

    int l = 0, c = 0, matriz[3][3], maior = 0;

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("Digite um numero para posicao %i %i: ", l, c);
            scanf("%i", &matriz[l][c]);
        }
    }

    calc(matriz, 3, &maior);

    printf("O maior valor eh: %i", maior);
}