#include <stdio.h>

void conta(int n1, int n2)
{
    int i = 0, num1, num2, soma = 0;

    if (n1 < n2)
    {
        num1 = n1;
        num2 = n2;
    }

    else
    {
        num1 = n2;
        num2 = n1;
    }

    while (i != num1)
    {
        soma += num2;
        printf(" %i", num2);
        i += 1;
    }

    printf(" = %i", soma);
}

int main()
{
    int n1, n2;

    printf("Digite o primeiro numero:");
    scanf("%i", &n1);
    printf("Digite o segundo numero:");
    scanf("%i", &n2);

    conta(n1, n2);
}