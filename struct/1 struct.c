#include <stdio.h>
#include <string.h>

struct pessoa
{
    int ra;
    int serie;
    char nome[30];
    char curso[30];
};

int main()
{
    int c;
    char lnx;
    struct pessoa aluno[100];

    printf("\nSera feito o cadastro de 100 alunos\n");

    for (c = 0; c < 100; c++)
    {
        printf("\nDigite o RA do aluno:");
        scanf("%i", &aluno[c].ra);

        printf("Digite o nome do aluno:");
        lnx = fgetc(stdin);
        fflush(stdin);
        fgets(aluno[c].nome, 30, stdin);

        printf("Digite qual curso estah fazendo:");
        fgets(aluno[c].curso, 30, stdin);

        printf("Digite qual serie estah:");
        scanf("%i", &aluno[c].serie);
    }

    for (c = 0; c < 100; c++)
    {
        if ((aluno[c].serie == 1) && strcmp(aluno[c].curso, "informatica"))
        {
            printf("\n%i\n", aluno[c].ra);
            printf("%s\n", aluno[c].nome);
        }
    }
}
