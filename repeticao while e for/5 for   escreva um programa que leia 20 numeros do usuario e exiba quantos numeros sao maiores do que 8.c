#include <stdio.h>

main()
{
    int cont1, cont2, num;

    cont1 = 0;
    cont2 = 0;

    for (cont1 = 0; cont1 != 20;cont1++)
        {

        printf("Digite um numero: ");
        scanf("%i",&num);

        if (num > 8)
        cont2++;
        }
            printf("\nForam escritos %i numero(s) maior(es) que 8",cont2);
}
