#include <stdio.h>

main()
{
    float dias, t1, t2, media, soma, maior, fim;

    soma = 0;
    maior = 0;
    fim = 0;
    dias = 0;

    while(fim == 0)
    {
        printf("Informe a temperatura do dia: ");
        scanf("%f", &t1);

        dias++;

        soma = soma + t1;

        if(maior > t1)

            maior == maior;

        else
            maior = t1;

        media = soma / dias;

        printf("Vai terminar ?\n[0] Nao \n[1] Sim\n");
        scanf("%f", &fim);

    }
    printf("A temperatura media: %.2f\n",media);
    printf("A maior temperatura foi: %.2f graus\n",maior);
}
