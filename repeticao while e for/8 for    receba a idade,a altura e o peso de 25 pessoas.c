#include <stdio.h>
main()
{
     int i, idade, maior_que_50 = 0, num10a20 = 0, num_m40 = 0;
     float altura, peso, soma_10a20 = 0, media_10a20, relacao_m40;


     for(i = 0; i < 25; i++)

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
             soma_10a20 += altura;
             num10a20++;
           }
       if(peso < 40)
       {
           num_m40++;
       }
     }

     media_10a20 = (soma_10a20 / num10a20);

     relacao_m40 = (100 * ((float) num_m40 / 25));

     printf("\nPessoas com mais de 50 anos: %d", maior_que_50);
     printf("\nMedia da alturas dos que tem entre 10 e 20 anos: %.2f", media_10a20);
     printf("\nRelacao de quem tem menos de 40 quilos: %.2f%%", relacao_m40);
     printf("\n\n");

}
