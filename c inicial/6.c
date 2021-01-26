#include <stdio.h>

main()
{
    float custoFabrica, custoConsumidor;

    printf("Digite o custo de fabrica: ");
    scanf("%f",&custoFabrica);

    custoConsumidor = (custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45));

    printf("Valor do carro: R$ %.2f", custoConsumidor);
}
