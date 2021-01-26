#include <stdio.h>

main()
{
    int a ,b , vetA[12], vetB[15];


     for(a = 0; a < 12; a++)
        {
        printf("digite um valor para o vetor A: ");
        scanf("%i", &vetA[a]);
        }

    for (b = 0; b < 15; b++)

        {
        printf("digite um valor para o vetor B: ");
        scanf("%i", &vetB[b]);
        }


    for(b = 0; b < 15; b++)
    {
       for(a = 0; a < 12; a++)
       {

          if(vetB[b] == vetA[a])
          {
           printf("\nO elemento repetido eh %i\n", vetB[b]);
          }
       }

    }
}

