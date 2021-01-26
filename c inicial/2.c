#include <stdio.h>

main()
{
    float tempo, velocidade, combustivel_gasto;

    printf("Digite o tempo: ");
    scanf("%f",&tempo);
    printf("Digite a velocidade: ");
    scanf("%f",&velocidade);

    combustivel_gasto = tempo * velocidade / 12;

    printf("Combustivel gasto: %.2f L",combustivel_gasto);

}
