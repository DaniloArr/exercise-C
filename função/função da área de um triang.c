#include <stdio.h>

int conta (int b, int h)
{

    int A = 0;
    A = (b * h)/ 2;
    return A;

}

int main()
{
    int b, h, res;
    printf("Digite o valor da altura:");
    scanf("%i", &h);
    printf("Digite o valor da base:");
    scanf("%i", &b);

    res = conta(b,h);

    printf("Base do triangulo: %i", res);


}
