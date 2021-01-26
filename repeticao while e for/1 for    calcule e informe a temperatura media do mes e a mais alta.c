#include <stdio.h>

main()
{

    float T,Tf,maior, soma;/*T: Temperatura, Tf: Temperatura Final, maior: temperatura mais elevada*/
    int dias;

    soma = 0;

    printf("Digite a temperatura em celsius: ");
    scanf("%f",&T);

    maior = T;

    for(dias=0;dias!=29;dias++)
    {
        printf("Digite a temperatura em celsius: ");
        scanf("%f",&T);

        soma = soma + T;

        if (T > maior)
        {
            maior = T;
        }

    }
    Tf = soma / 30;

    printf("\nMedia das temperaturas: %.2f",Tf);
    printf("\nA maior temperatura: %.1f", maior);
}
