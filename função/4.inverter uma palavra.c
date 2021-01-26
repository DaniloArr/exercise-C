#include <stdio.h>
#include <string.h>

void *invert( char * s )
{
    int tam = strlen(s) ;
    int cont, i, j;

    for (i = 0, j = tam - 1; i < j; i++, j--)
    {
        cont = s[i];
        s[i] = s[j];
        s[j] = cont;
    }

    return s;
}


int main()
{
    char palavra[20], invertida[20];

    printf("Insira uma palavra:");
    gets(palavra);;

    printf("\nPalavra invertida:%s\n", invert(palavra) );

    return 0;
}
