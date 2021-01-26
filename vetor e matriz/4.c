#include <stdio.h>

main()
{
    int l ,c, matriz[2][2];
    float  maior = 0, razao = 0;

    for (l = 0; l < 2; l++)
    {
        for (c = 0; c < 2; c++)
        {
            printf("Digite um numero para posicao [%i] [%i]: ", l, c);
            scanf("%i", &matriz[l][c]);
        }

    }

    for (l = 0; l < 2; l++)
    {
       for (c = 0; c < 2; c++)
       {

          if (l == c)
          {

              if (matriz[l][c] > maior)
              {
                 maior = matriz[l][c];
              }

           }

       }

    }

    for (l = 0; l < 2; l++)
    {
        for (c = 0; c < 2; c++)
        {
            razao = (matriz[l][c] / maior);

            printf("\nA matriz alterada [%i] [%i]: %.2f\n",l, c, razao);

        }

    }


}
