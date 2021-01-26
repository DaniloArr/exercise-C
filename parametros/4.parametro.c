#include <stdio.h>
#include <string.h>

struct cadastro
{

    int codigo, preco;
    char nome[30];
};

void media(struct cadastro prod[], int n, float *soma)
{
    float med;

    med = *soma / 3;

    printf("\nA media dos valores eh %.2f", med);
}

void menor(struct cadastro prod[], int n)
{
    for (int i = 0; i < 3; i++)
    {
        if (prod[i].preco < 10)
        {
            printf("\nO produto vale R$%i ", prod[i].preco);
        }
    }
}

int main()
{
    float soma;
    struct cadastro prod[3];
    char lnx;

    for (int i = 0; i < 3; i++)
    {
        printf("\nDigite o codigo do produto %i: ", i + 1);
        scanf("%i", &prod[i].codigo);
        printf("Digite o nome do produto: ");
        lnx = fgetc(stdin);
        fflush(stdin);
        fgets(prod[i].nome, 30, stdin);
        printf("Digite o preco do produto: ");
        scanf("%i", &prod[i].preco);

        prod[i].nome[strlen(prod[i].nome) - 1] = '\0';

        soma += prod[i].preco;
    }

    media(prod, 3, &soma);
    menor(prod, 3);
}