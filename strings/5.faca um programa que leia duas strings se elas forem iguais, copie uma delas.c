#include <stdio.h>
#include <string.h>

main()
{
    char caract1[50], caract2[50], caract3[50];

    printf("Digite um nome:");
    fgets(caract1,50,stdin);

    printf("\nDigite outro nome:");//se não dar um espaço antes de digitar nesse printf, sai tudo junto no printf da resposta
    fgets(caract2,50,stdin);

    caract1[strlen(caract1) - 1] = '\0';
    caract2[strlen(caract2) - 1] = '\0';

    if (strcmp(caract1,caract2)== 0)
    {
        strcpy(caract3,caract1);
        printf("\n%s\n",caract3);
    }

    else if (strcmp(caract1,caract2)!= 0)
    {
        strcpy(caract3,caract1);
        strcat(caract3,caract2);
        printf("\n%s\n",caract3);
    }


}
