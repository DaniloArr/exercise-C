#include <stdio.h>
main()
{
float n,h=0;

printf("Digite um valor: ");
scanf("%f",&n);

    while (n>0)
{
    h=h+1/n;
    n--;

}

printf("%.2f\n",h);
}

