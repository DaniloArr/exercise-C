#include <stdio.h>
main()
{
    int c=0;
    float n,soma;

      while(c==0)
   {
     printf("Insira Um Numero: ");
     scanf("%f",&n);


           if(n < 0)
             {
                printf("\nNumero Invalido\n");
                break;
            }

     soma = soma + n;

   }

   printf("\nA Soma dos Numeros Inseridos:%.1f\n",soma);


}
