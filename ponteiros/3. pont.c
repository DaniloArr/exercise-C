#include <stdio.h>

void calculo(int *A, int *B)
{
    *B = *A * 2;
}

int main()
{
    int a, b;

    printf("Insira um valor: ");
    scanf("%i", &a);

    calculo(&a, &b);

    printf("\nValor inicial: %i, valor calculado: %i", a, b);
}