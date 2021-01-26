#include <stdio.h>

int conta(int N, int *resul);

int main()
{
  int N , resul = 0;

  printf ("Digite um valor:");
  scanf("%i", &N);

  conta(N, &resul);

  printf("Resultado: %i\n", resul);
}

int conta(int N, int *resul)
{
  for (int i = 1; i <= N; i++)
  {
    *resul += i;
  }
}
