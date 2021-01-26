#include <stdio.h>
main()
{
     float altura, peso, soma_altu_10a20, media_altu_10a20, relacao_m40;
     int i, idade, maior_que_50, num10a20, porc40kg ;

     maior_que_50 = 0;
     num10a20 = 0;
     porc40kg = 0;
     soma_altu_10a20 = 0;
     i = 0;

     while(i < 25)

     {
     printf("\nPessoa %d\n", i+1);
     printf("Idade: ");
     scanf("%d", &idade);
     printf("Altura (M): ");
     scanf("%f", &altura);
     printf("Peso (Kg): ");
     scanf("%f", &peso);

       if(idade > 50)
        {
           maior_que_50++;
        }
       else if((idade > 10) && (idade < 20))
           {
             soma_altu_10a20 += altura; num10a20++;
           }
       if(peso < 40)
       {
           porc40kg++;
       }

       i++;
     }

     media_altu_10a20 = (soma_altu_10a20 / num10a20);

     relacao_m40 = (100 * ((float) porc40kg / 25));

     printf("\nPessoas com mais de 50 anos: %d", maior_que_50);
     printf("\nMedia da alturas dos que tem entre 10 e 20 anos: %.2f", media_altu_10a20);
     printf("\nRelacao de quem tem menos de 40 quilos: %.2f%%", relacao_m40);
     printf("\n\n");


}
