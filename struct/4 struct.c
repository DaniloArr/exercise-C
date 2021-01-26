#include <stdio.h>
#include <string.h>

struct Consumo
{
	char nome[15];
	float potencia, tempo; // tempo em horas
};

int main()
{

	int i = 0, t; // tempo em dias
	char ch;
	struct Consumo eletro[5];
	float consumototal, consumo, porcent, potTotal = 0, horastotal = 0, consRelat;

	for (i = 0; i < 5; i++)
	{
		printf("------------------------------");
		printf("\nInsira o nome do eletrodomestico:");
		fgets(eletro[i].nome, 15, stdin);
		eletro[i].nome[strlen(eletro[i].nome) - 1] = '\0';

		printf("\nDigite a potencia(em kW):");
		scanf("%f", &eletro[i].potencia);

		printf("\nDigite o tempo ativo por dia(em hrs):");
		scanf("%f", &eletro[i].tempo);
		ch = fgetc(stdin);
		fflush(stdin);
	}

	printf("\nDigite o tempo de uso em dias:");
	scanf("%i", &t);

	for (i = 0; i < 5; i++)
	{
		consumototal += eletro[i].potencia * eletro[i].tempo * t;
	}
	printf("------------------------------");

	printf("\nConsumo total: %.2f\n", consumototal);

	for (i = 0; i < 5; i++)
	{
		consumo = ((eletro[i].potencia * eletro[i].tempo * t) / consumototal) * 100;
		printf("\nConsumo relativo da(o) %s: %.2f%%\n", eletro[i].nome, consumo);
	}
}
