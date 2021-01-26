#include <stdio.h>

int tamanho(char v[])
{
    int i;

    while (v[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{

    char plv[50], str[50];
    int cont, tam, p = 0;

    printf("Digite uma palavra: ");
    gets(plv);

    tam = tamanho(plv);
    cont = tam;

    while (cont >= 0 && p <= tam)
    {

        str[p] = plv[cont];
        printf("%c", str[p]);
        cont--;
        p++;
    }
    return 0;
}
