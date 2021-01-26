#include <stdio.h>
#include <string.h>

main()
{
    char nome[50];
    int c, inver;

    printf("Insira um nome:");
    gets(nome);

    inver = strlen(nome);

    printf("\nA palavra de tras pra frente fica assim: ");

    for (c = inver-1; c >= 0; c--)

         {
          printf("%c",nome[c]);
         }
}

