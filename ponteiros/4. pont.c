#include <stdio.h>

float calculo(float A, float B, float med, float *maior);

int main()
{
    float med, maior, A, B, resposta;

    printf("\nDigite um valor A:");
    scanf("%f", &A);
    printf("\nDigite um valor B:");
    scanf("%f", &B);

    calculo(A, B, med, &maior);
    resposta = calculo(A, B, med, &maior);

    if (maior != 0)
    {
        printf("\nO maior numero eh: %.1f", maior);
    }
    else
    {
        printf("\nSao iguais");
    }

    printf("\nA calculo dos valores eh: %.1f", resposta);
}

float calculo(float A, float B, float med, float *maior)
{

    med = (A + B) / 2;

    if (A > B)
    {
        *maior = A;
        return *maior, med;
    }

    else if (B > A)
    {
        *maior = B;
        return *maior, med;
    }

    else
    {
        *maior = 0;
        return *maior, med;
    }
}
