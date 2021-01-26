#include <stdio.h>
#include <math.h>

float calcular_distancia(int xb,int xa, int yb, int ya)
{
    return sqrt( pow((xb - xa),2) + pow((yb - ya),2));
}

int main()
{
    int pX[2];
    int pY[2];
    printf("Informe xa:");
    scanf("%d",&pX[0]);

    printf("Informe ya:");
    scanf("%d",&pY[0]);

    printf("Informe xB:");
    scanf("%d",&pX[1]);

    printf("Informe yB:");
    scanf("%d",&pY[1]);

    float resultado = calcular_distancia(pX[1],pX[0],pY[1],pY[0]);
    printf("Distancia: %f",resultado);
}
