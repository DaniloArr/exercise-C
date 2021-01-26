#include <stdio.h>
#include <string.h>

struct cadastro
{
    char nome[20];
    int ra;
};

void preenche(struct cadastro *aluno)
{
    printf("\nDigite o nome do aluno: ");
    fgets(aluno->nome, 20, stdin);
    printf("Digite o RA do aluno: ");
    scanf("%i", &aluno->ra);

    aluno->nome[strlen(aluno->nome) - 1] = '\0';
}

int main()
{
    struct cadastro aluno;

    preenche(&aluno);

    printf("\nNome: %s\n", aluno.nome);
    printf("RA: %i\n", aluno.ra);
    printf("\n\n");
}