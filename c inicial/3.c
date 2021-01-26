#include <stdio.h>

main()
{
    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%d",&A);
    printf("Digite o valor de B: ");
    scanf("%d",&B);

    C = A;
    A = B;
    B = C;

    printf("Valor de A: %d", A);
    printf("Valor de B: %d", B);
}
