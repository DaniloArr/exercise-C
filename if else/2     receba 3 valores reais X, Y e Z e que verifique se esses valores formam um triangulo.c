#include <stdio.h>

int main()
{

      float x, y, z;

      printf("Digite o valor do lado: ");
      scanf("%f",&x);
      printf("Digite o valor do lado: ");
      scanf("%f",&y);
      printf("Digite o valor do lado: ");
      scanf("%f",&z);

      if((x < y + z)&&(y < x + z)&&(z < x + y))
      {
          if((x==y) && (x==z))
          {
               printf("Triangulo Equilatero");
          }

          else if((x==y) || (x==z))
          {
              printf("Triangulo Isosceles");
          }

          else
          {
              printf("Triangulo Escaleno");
          }
       }
          else
          {
            printf("Nao foi possivel formar um triangulo");
          }
}


