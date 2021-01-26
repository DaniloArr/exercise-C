#include <stdio.h>

main()
{
    int anos, meses, dias;

    printf("Digite a idade em anos: ");
    scanf("%d",&anos);
    printf("Digite a idade em meses: ");
    scanf("%d",&meses);
    printf("Digite a idade em dias: ");
    scanf("%d",&dias);

    dias = ((anos * 365) + (meses * 30) + dias);

    printf("Sua idade em dias: %d",dias);

}
