#include <stdio.h>

int i;

void troca(int v[], int menor)
{
    int k;

    for (int i = 0; i < 10; i++)
    {

        if (v[i] < menor)
        {
            menor = v[i];
            k = i;
        }
    }
    v[k] = v[0];
    v[0] = menor;
}

int main()
{

    int v[10], menor;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%i", &v[i]);
    }

    troca(v, menor);

    for (i = 0; i < 10; i++)
    {
        printf("%i ", v[i]);
    }
}