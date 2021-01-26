#include <stdio.h>

main()
{
    float i1, i2, i3, i4, media;


    printf("Digite a idade da primeira pessoa: ");
    scanf("%f", &i1);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%f", &i2);
    printf("Digite a idade da terceira pessoa: ");
    scanf("%f", &i3);
    printf("Digite a idade da quarta pessoa: ");
    scanf("%f", &i4);

    media = (i1 + i2 + i3 + i4) / 4;

    if ((i1>i2)&&(i1>i3)&&(i1>i4))
    {
        printf("Media das idades: %.2f ", media);
        printf("\nA pessoa mais velha tem: %.1f", i1);
    }

    else if((i2>i1)&&(i2>i3)&&(i2>i4))
    {
        printf("Media das idades: %.2f ", media);
        printf("\nA pessoa mais velha tem: %.1f", i2);
    }

    else if((i3>i1)&&(i3>i2)&&(i3>i4))
    {
        printf("Media das idades: %.2f ", media);
        printf("\nA pessoa mais velha tem: %.1f", i3);
    }

    else if((i4>i1)&&(i4>i2)&&(i4>i3))
    {
        printf("Media das idades : %.2f ", media);
        printf("\nA pessoa mais velha tem: %1f", i4);
    }
}
