#include <stdio.h>

int i;

void func1(int v1[], int v2[], int tam)
{
    int cont = 0;

    for (i = 0; i < tam; i++)
    {
        if (v1[i] == v2[i])
        {
            cont = 1;
            printf("\n%i O vetor eh igual", v1[i]);
        }

        else
        {
            cont = 0;
        }
    }
}

void func2(int v1[], int v2[], int tam)
{
    int contr = 0, j;

    for (i = 0, j = tam - 1; i < tam && j >= 0; i++, j--)
    {
        if (v1[i] == v2[i])
        {
            contr += 1;
        }

        else
        {
            contr = 0;
        }
    }
    if (contr == 3)
    {
        printf("\nMesmos valores mas em lugares diferentes");
    }
}

void func3(int v1[], int v2[], int tam)
{
    for (i = 0; i < tam; i++)
    {
        if (v1[i] != v2[i])
        {
            printf("\nO primeiro tem pelo menos um valor que nao esta no segundo");
        }
    }
}

int main()
{
    int v1[2], v2[2], resul;

    for (i = 0; i < 2; i++)
    {
        printf("Digite um valor para o vetor 1: ");
        scanf("%i", &v1[i]);
    }

    for (i = 0; i < 2; i++)
    {
        printf("Digite um valor para o vetor 2: ");
        scanf("%i", &v2[i]);
    }

    func1(v1, v2, 2);
    func2(v1, v2, 2);
    func3(v1, v2, 2);
}