#include <stdio.h>
#include <string.h>

struct alunos
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

int main()
{

    int i;
    struct alunos cadastro[5];
    char pessMaiorn1[30], pessMaiormedgeral[30], pessMenormedgeral[30], ch;
    float MaiorN1 = 0, MaiorMedgeral = 0, MenorMedgeral = 10, Mediageral = 0;

    printf("\nCADASTRO\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nQual eh a matricula do aluno %i:", i + 1);
        scanf("%i", &cadastro[i].matricula);

        printf("Digite o nome do aluno: ");
        ch = fgetc(stdin);
        fflush(stdin);
        fgets(cadastro[i].nome, 30, stdin);
        cadastro[i].nome[strlen(cadastro[i].nome) - 1] = '\0';

        printf("Digite a nota da primeira prova: ");
        scanf("%f", &cadastro[i].n1);

        printf("Digite a nota da segunda prova: ");
        scanf("%f", &cadastro[i].n2);

        printf("Digite a nota da terceira prova: ");
        scanf("%f", &cadastro[i].n3);

        if (cadastro[i].n1 > MaiorN1)
        {
            MaiorN1 = cadastro[i].n1;
            strcpy(pessMaiorn1, cadastro[i].nome);
        }

        Mediageral = (cadastro[i].n1 + cadastro[i].n2 + cadastro[i].n3) / 3;

        if (Mediageral > MaiorMedgeral)
        {
            MaiorMedgeral = Mediageral;
            strcpy(pessMaiormedgeral, cadastro[i].nome);
        }

        if (Mediageral < MenorMedgeral)
        {
            MenorMedgeral = Mediageral;
            strcpy(pessMenormedgeral, cadastro[i].nome);
        }
    }

    printf("\n%s ficou com %.2f na primeira prova\n", pessMaiorn1, MaiorN1);
    printf("%s ficou com %.2f sendo a maior media geral\n", pessMaiormedgeral, MaiorMedgeral);
    printf("%s ficou com %.2f sendo a menor media geral\n", pessMenormedgeral, MenorMedgeral);

    for (i = 0; i < 5; i++)
    {
        Mediageral = (cadastro[i].n1 + cadastro[i].n2 + cadastro[i].n3) / 3;

        if (Mediageral >= 6)
        {
            printf("%s foi APROVADO\n", cadastro[i].nome);
        }
        else
        {
            printf("%s foi REPROVADO\n", cadastro[i].nome);
        }
    }
}