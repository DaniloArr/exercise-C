#include <stdio.h>

main()
{
    float media, temp, maiortemp;
    int i;

    i = 0;
    media = 0;

    while (i<30)
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
        i++;
    }
    media = media / i;

    printf("\nMedia das temperatura: %.2f \n", media);
    printf("\nMaior temperatura: %.2f \n", maiortemp);
}
