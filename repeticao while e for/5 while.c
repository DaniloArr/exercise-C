#include <stdio.h>

main()
{
    int cont1, cont2, num;

    cont1 = 0;
    cont2 = 0;

    while (cont1 != 20)
    {

        printf("Digite um numero: ");
        scanf("%i",&num);

        cont1++;

        if (num > 8)
        cont2++;

    }
    printf("\nForam escritos %i numero(s) maior(es) que 8",cont2);

}
