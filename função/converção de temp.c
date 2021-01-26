#include <stdio.h>

int converter_c_para_f (int c)
{
    int resultado;
    resultado = ((c * 9) / 5) + 32;
    return resultado;
}

void mostrar_f (int f)
{
    printf("\nResultado convertido para F:%i\n", f);
}

int main()
{
    int c, resultado_f;

    printf("Informe o valor de C:");
    scanf("%i", &c);

    resultado_f = converter_c_para_f(c);
    mostrar_f(resultado_f);
}
