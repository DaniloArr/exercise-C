#include <stdio.h>

main()
{
    int n, c, maior, menor,fim ;

    c = 0;
    maior = 0;
    menor = 0;
    fim = 0;

    while (fim == 0)
    {
        printf("Informe um valor: \n");
        scanf("%i",&n);

        if (n != 0)
        {
            if (n > maior)
            {
              maior = n;

            }
            else
            {
              menor = n;
            }
        }

        else
        {
            printf("Finalizado\n");
            fim = 1;
        }

    }

    printf("Maior numero: %.1i\n",maior);
    printf("Menor numero: %.1i\n",menor);

}

