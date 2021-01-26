#include <stdio.h>

typedef struct
{
    int horas;
    int minutos;
    float min;
} hm;

hm tempo;

hm converter(int min)
{
    tempo.horas = min / 60;
    tempo.minutos = (int)min % 60;

    return tempo;
}
int main()
{
    float min;

    printf("Insira um intervalo de tempo em minutos: ");
    scanf("%f", &min);

    converter(min);

    printf("\nEh a mesma coisa que %ih %i min \n\n", tempo.horas, tempo.minutos);
    return 0;
}
