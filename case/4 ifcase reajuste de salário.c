#include <stdio.h>

main()
{
    float atual, novo;
    int plano;
    printf("Digite o salario atual: ");
    scanf("%f",&atual);
    printf("Plano de salario(1,2,3): ");
    scanf("%d",&plano);

    switch(plano)
        {
            case 1:
                   novo = atual * 1.1;
                   printf("Novo salaraio: R$ %.2f",novo);
                   break;

            case 2:
                   novo = atual * 1.15;
                   printf("Total do novo salaraio: R$ %.2f",novo);
                   break;

            case 3:
                   novo = atual * 1.2;
                   printf("Total do novo salaraio: R$ %.2f",novo);
                   break;

            default: printf("Plano invalido");
        }

}
