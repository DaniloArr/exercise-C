#include <stdio.h>

main()
{
    int lar;
    float compra;

    printf("Digite a quantidade de laranjas: ");
    scanf("%d",&lar);

    if(lar < 12)
    {
        compra = lar * 0.35;
    }

    else
    {
        compra = lar * 0.30;
    }

    printf("Valor da compra: %.2f ",compra);

}
