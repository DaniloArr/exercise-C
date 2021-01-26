#include <stdio.h>

struct Ponto{
    int x;
    int y;
};

void preencher_pontos (struct Ponto *a, struct Ponto *b);

void calcular_distancia (struct Ponto *a, struct Ponto *b, float *resultado);

int main()
{
    struct Ponto a,b;
    float resultado;

    preencher_pontos(&a,&b);
    calcular_distancia(&a,&b, &resultado);

    printf("\nResultado:%.4f", resultado);
}

void preencher_pontos(struct Ponto *a, struct Ponto *b)
{

     printf("Informe xA:");
     scanf("%i", &a->x);

     printf("Informe yA:");
     scanf("%i", &a->y);

     printf("Informe xB:");
     scanf("%i", &b->x);

     printf("Informe yB:");
     scanf("%i", &b->y);

}

void calcular_distancia(struct Ponto *a, struct Ponto *b, float *resultado)
{
    *resultado = sqrt(pow((b->x - a->x),2) + pow ((b->y - a->y),2));
}
