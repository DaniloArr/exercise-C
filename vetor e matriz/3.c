#include <stdio.h>

main()
{
    int l ,c , matriz[6][5], soma = 0;


    for (l = 0; l < 6; l++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("\nDigite um numero para posicao %i %i: ", l, c);
            scanf("%i", &matriz[l][c]);
        }
    }

    for (c = 0; c < 5; c++)
    {
        for(l = 0; l < 6; l++)
        {
            soma = soma + matriz[l][c];
        }

    }

   printf("\nSOMA : %.2i\n", soma);
}
