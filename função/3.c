#include <stdio.h>
#include <math.h>


void calc_imc(float p, float h, int *id_imc);
int pegar_id_imc(float resultado_imc);


int main()
{
    float alt, peso, calculo;
    int id_imc =0;

    printf("Informe o seu peso(kg):");
    scanf("%f", &peso);

    printf("Informe a sua altura(m):");
    scanf("%f", &alt);


    calc_imc (peso, alt, &id_imc);
    printf ("ID: %i\n", id_imc);

    switch (id_imc)
    {
         case 1:
            printf("Resultado = Magro");
            break;
         case 2:
            printf("Resultado = Normal");
            break;
         case 3:
            printf("Resultado = Acima do peso");
            break;
         case 4:
            printf("Resultado = Obesidade");
            break;
         case 5:
            printf("Resutlado = Obesidade grave");
            break;

    }
    printf("\n\n");
 }



void calc_imc (float p, float h, int *id_imc)
{
    float resultado_imc = 0;
    resultado_imc =  p / (pow(h,2));
    *id_imc = pegar_id_imc(resultado_imc);
}


int pegar_id_imc (float resultado_imc)
{
    printf("\nIMC: %f\n", resultado_imc);

     if (resultado_imc < 20)
    {
        //printf("\nResultado = Magro\n");
        return 1;
    }

    else if ((resultado_imc >= 20) && (resultado_imc < 25))
    {
        //printf("\nResultado = Normal\n");
        return 2;
    }

    else if ((resultado_imc >= 25) && (resultado_imc < 30))
    {
        //printf("\nResultado = Acima do Peso\n");
        return 3;
    }

     else if ((resultado_imc >= 30) && (resultado_imc < 35))
    {
        //printf("\nResultado = Obesidade\n");
        return 4;
    }

    else  (resultado_imc >= 35);
    {
        //printf("\nResultado = Obesidade Grave\n");
        return 5;
    }
    return -1;
}
