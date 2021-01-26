#include <stdio.h>

main()
{
    float media, temp, maiortemp;
    int i;

    media = 0;

    for (i = 0; i < 30; i++)
    {
        printf("Valor da temperatura: ");
        scanf("%f", &temp);

        media = media + temp;

        if (i == 0)
        {
            maiortemp = temp;
        }

        else
        {
            if (temp > maiortemp)
            {
                maiortemp = temp;
            }
        }

    }
    media = media / i;

    printf("Media das temperatura: %.2f \n", media);
    printf("Maior temperatura: %.2f \n", maiortemp);
}

