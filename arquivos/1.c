#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char nome[50];
    float nota1, nota2;
    int c, i = 0;

    if ((fp = fopen("exerc1.txt", "w+")) == NULL)
    {
        printf("Invalida");
    }

    printf("Qual vai ser a quantidade de alunos que deseja cadastrar: ");
    scanf("%i", &c);

    fprintf(fp, "%i\n", c);
    while (i < c)
    {
        setbuf(stdin, 0);

        printf("\nNome: ");
        fgets(nome, 50, stdin);
        fprintf(fp, "%s", nome);

        printf("Nota 1: ");
        scanf("%f", &nota1);
        fprintf(fp, "%.1f\n", nota1);

        printf("Nota 2: ");
        scanf("%f", &nota2);
        fprintf(fp, "%.1f\n", nota2);

        i++;
    }
    printf("\nArquivo finalizado");
}