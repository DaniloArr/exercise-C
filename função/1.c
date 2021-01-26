#include <stdio.h>
#include <math.h>

int main()
{
    int m[2][2];
    float resul;

    matriz(m);
    distancia(m, &resul);
    printf("\nResultado: %f\n", resul);

}

void matriz(int m[2][2])
{

      printf("Digite o x do ponto A: ");
      scanf("%i", &m[0][0]);

      printf("Digite o y do ponto A: ");
      scanf("%i", &m[0][1]);

      printf("Digite o x do ponto B: ");
      scanf("%i", &m[1][0]);

      printf("Digite o y do ponto B: ");
      scanf("%i", &m[1][1]);

}

void distancia(int m[2][2], float *resul)
{
    *resul = sqrt(pow((m[1][0] - m[0][0]), 2) + pow((m[1][1] - m[0][1]), 2));
}













