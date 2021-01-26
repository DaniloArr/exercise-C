#include<stdio.h>

main()
{
    float media;

    printf("Insira a media final: ");
    scanf("%f",&media);

    if (media<= 4.9)
    {
        printf("Voce tirou D");
    }

    else if((media>=5.0)&&(media<=6.9))
    {
        printf("Voce tirou C");
    }

    else if((media>=7.0)&&(media<=8.9))
    {
        printf("Voce tirou B");
    }

    else
    {
        printf("Voce tirou A");
    }

  return 0;
}
