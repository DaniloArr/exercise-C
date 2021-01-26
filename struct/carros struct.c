#include <stdio.h>
#include <math.h>
typedef struct carro{
    char fabricante[50];
    char modelo[50];
    int ano;
    char cor[50];
    float preco;
}Carro;
//Prot�tipos
void preencher_dados(Carro *c);
void mostrar_dados(Carro c);

//Subprogramas
int main(){
    Carro c[2];
    int i;
    for(i = 0; i < 2; i++){
        printf("\nInserindo Registro [%i]:\n\n", i +  1);
        preencher_dados(&c[i]);
        printf("\n");
    }
    for(i = 0; i < 2; i++){
        printf("\nMostrando Registro [%i]:\n", i +  1);
        mostrar_dados(c[i]);
        printf("\n");
    }
}

void preencher_dados(Carro *c){

    printf("Informe o fabricante: ");
    scanf("%s",&c->fabricante);

    printf("Informe o modelo: ");
    scanf("%s",&c->modelo);

    printf("Informe o ano: ");
    scanf("%d",&c->ano);

    printf("Informe a cor: ");
    scanf("%s",&c->cor);

    printf("Informe a preco: ");
    scanf("%f",&c->preco);
}

void mostrar_dados(Carro c){
    printf("\n Fabricante: %s \n Modelo: %s \n Ano: %d \n cor: %s \n Preco: %.2f",
           c.fabricante,c.modelo,c.ano,c.cor,c.preco);
}
