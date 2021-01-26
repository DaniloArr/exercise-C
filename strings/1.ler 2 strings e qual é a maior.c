#include <stdio.h>
#include <string.h>

main()
{
    char x[50],y[50];
    int X,Y;

    printf("Insira uma frase: ");
    fgets(x,50,stdin);
    printf("Insira outro frase: ");
    fgets(y,50,stdin);

    x[strlen(x)-1] = '\0';
    y[strlen(y)-1] = '\0';


    X = strlen(x);
    Y = strlen(y);

    if(X>Y)
    {
        printf("String 1 tem mais caracteres");
    }

    else if(Y>X)
    {
        printf("String 2 tem mais caracteres");
    }

    else
    {
        printf("Sao iguais");
    }

}
