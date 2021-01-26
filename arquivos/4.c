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
    FILE *new;
    struct cadastro func[3];
    char ch;
    int x;

    fp = fopen("exerc3.txt", "r+b");

    new = fopen("exerc4.txt", "w+b");

    for (x = 0; x < 3; x++)
    {
        fread(&func[x], sizeof(struct cadastro), 1, fp);
    }

    for (x = 0; x < 3; x++)
    {
        fwrite(&func[x], sizeof(struct cadastro), 1, new);
    }

    fclose(fp);
    fclose(new);
}