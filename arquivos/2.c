#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    int anos, x = 1;
    float alt;
    char ch, nome[50];

    if ((fp = fopen("exerc2.txt", "w+")) == NULL)
    {
        printf("Arquivo nao pode ser aberto");
    }

    do
    {
        setbuf(stdin, 0);

        printf("\nQual o nome: ");
        fgets(nome, 50, stdin);
        nome[strlen(nome) - 1] = '\0';
        fprintf(fp, "%s tem ", nome);

        printf("Quantos anos tem: ");
        scanf("%i", &anos);
        fprintf(fp, "%.1i anos ", anos);

        printf("Qual a altura: ");
        scanf("%f", &alt);
        fprintf(fp, "e %.2f de altura.\n", alt);

        x++;
        printf("Deseja parar SIM[1], NAO[0]:");
        scanf("%i", &x);

    } while (x == 0);

    printf("\n Finalizado");
}