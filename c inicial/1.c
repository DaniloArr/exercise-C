#include <stdio.h>

main()
{
    float raio, altura, volume;

    printf("Digite o valor do raio: ");
    scanf("%f",&raio);
    printf("Digite o valor da altura: ");
    scanf("%f",&altura);

    volume = 3.14 * raio * raio * altura;

    printf("Volume do recipiente: %.2f",volume);
}
