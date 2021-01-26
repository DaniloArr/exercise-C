#include <stdio.h>

main()
{
    /*4 notas com peso=1, peso=2, peso=3, peso=4
    indeterminado n° de alunos
    média anual da turma
    media anual do aluno com a nota mais alta
    */
    float nota1, nota2, nota3, nota4, mediaturma,medialta,media, soma, fim;
    int alunos ;

    alunos = 0;
    nota1 = 0;
    nota2 = 0;
    nota3 = 0;
    nota4 = 0;
    mediaturma = 0;
    medialta = 0;
    soma = 0;
    fim = 0;

    while(fim == 0)
    {
        printf("Valor da nota 1: ");
        scanf("%f", &nota1);
        printf("Valor da nota 2: ");
        scanf("%f", &nota2);
        printf("Valor da nota 3: ");
        scanf("%f", &nota3);
        printf("Valor da nota 4: ");
        scanf("%f", &nota4);

        alunos++;

        soma = soma + (nota1*1) + (nota2*2) + (nota3*3) + (nota4*4);

        media = ((nota1*1) + (nota2*2) + (nota3*3) + (nota4*4)) / 4;

        if (medialta > media){

             medialta == medialta;}

        else{
            medialta = media;}

            mediaturma = (soma / 4) / alunos;

        printf("Vai terminar ?\n[0] Nao \n[1] Sim\n");
        scanf("%f", &fim);
    }

    printf("\nA media da turma foi: %.1f\n",mediaturma);
    printf("A media mais alta foi: %.1f\n",medialta);

}
