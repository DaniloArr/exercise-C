#include <stdio.h>
#include <string.h>

main()
{
    char nome[50];
    int c;

    printf("Insira um nome:");
    gets(nome);



    for (c = 0; c < nome[c]; c++)
  {

    if (c < 4)
    {
      printf("Letra %d: \%c\n", c+1, nome[c]);
    }

  }

}





