#include <stdio.h>
#include <string.h>

main()
{

    char frase[50], L1[50], L2[50];
    int c;

    c = 0;

    printf("Digite uma frase: ");
    fgets(frase,50, stdin);

    printf("\nQual letra vai ser trocada: ");
    fgets(L1, 50, stdin);
    printf("\nInsira qual vai ser a nova letra: ");
    fgets(L2, 50, stdin);

    frase[strlen(frase) - 1] = '\0';


    for (c = 0; c > strlen(frase); c++)
    {
        if (frase[c] == L1[0])
        {
            frase[c] = L2[0];
        }
    }

    printf("\nNova frase: %s\n", frase);
}


