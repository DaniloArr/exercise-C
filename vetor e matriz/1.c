#include <stdio.h>

main()
{
    int c;
    float razao, vet[10], maior = 0 ;

    for(c = 0; c < 10; c++)
    {
        printf("Digite um numero: ");
        scanf("%i", &vet[c]);

      if(c==0)
      {
        maior = vet[0];
      }
      else if(vet[c] > maior)
      {
        maior = vet[c];
      }

    }
    for(c = 0; c < 10; c++)
    {
        razao = (vet[c] / maior);
        printf("\n%.2f", razao);
    }

}


