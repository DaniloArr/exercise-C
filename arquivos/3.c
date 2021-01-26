#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro
{

    char nome[50];
    int codigo;
    float sal;
};

int main()
{
    FILE *fp;
    struct cadastro func[3];
    char ch;
    int x;

    fp = fopen("exerc3", "w+b");

    for (x = 0; x < 3; x++)
    {
        printf("\nNome: ");
        fgets(func[x].nome, 50, stdin);
        func[x].nome[strlen(func[x].nome) - 1] = '\0';

        printf("Codigo do departamento: ");
        scanf("%i", &func[x].codigo);

        printf("Salario: ");
        scanf("%f", &func[x].sal);

        fwrite(&func[x], sizeof(struct cadastro), 1, fp);
        //ch = fgetc(stdin);
        fflush(stdin);
    }
    printf("\n-----Finalizado-----\n");

    for (x = 0; x < 3; x++)
    {
        printf("\nNome: %s\n", func[x].nome);
        printf("Codigo do departamento: %i\n", func[x].codigo);
        printf("Salario: %.2f", func[x].sal);
    }

    fclose(fp);

    fp = fopen("exerc3", "w+b");

    // printf("\n\n----Novo arquivo----\n");

    rewind(fp);

    printf("\n\n----Novo arquivo----\n");

    for (x = 0; x < 3; x++)
    {

        if (func[x].codigo == 3)
        {
            func[x].sal = func[x].sal * 1.1;
        }
        fwrite(&func[x], sizeof(struct cadastro), 1, fp);
    }

    for (x = 0; x < 3; x++)
    {
        printf("\n\nNome: %s\n", func[x].nome);
        printf("Salario com o aumento: %.2f", func[x].sal);
    }
    fclose(fp);
}