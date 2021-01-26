#include <stdio.h>

float fat(int n)
{
    if (n == 0)
        return 1;

    else
    {
        return n * fat(n - 1);
    }
}

float calc(int n)
{
    if (n == 1)
        return 1;

    else
    {
        return 1 / fat(n) + calc(n - 1);
    }
}

int main()
{
    int n;
    float resp;

    printf("\nDigite um numero para o calculo: ");
    scanf("%i", &n);

    fat(n);
    resp = calc(n);

    printf("\n");
    printf("%f", resp + 1);
    printf("\n\n");
}