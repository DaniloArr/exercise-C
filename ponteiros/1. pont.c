#include <stdio.h>

main()
{
    int y, *p, x;
    y = 3;           // y está recebendo o valor 3
    p = &y;          // (p = endereço qualquer)p está recebendo o endereço de y
    x = *p;          // (x = 3)x recebe o valor de p que aponta para o endereço de y
    x = 7;           // x está recebendo o valor 7
    (*p)++;          // p está incrementando o ponteiro p ficando assim com o valor 4
    x--;             // x está decrementando o valor 7 virando assim 6
    (*p) = (*p) + x; // o valor de p incrementado soma com o valor decrementado de x, (*p = 10)
    printf("\ny = %i\n", y);
}

// valor final do y é 10