// Dias de idade
#include <stdio.h>
int main()
{
    int idade, dias;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if (idade < 0)
    {
        printf("Idade invalida!\n");
    }
    else if (idade > 100)
    {
        printf("Não existe alguém tão velho!\n");
    }
    else if (idade == 0)
    {
        printf("O usuario ainda nao nasceu!");
    }
    else
    {
        dias = idade * 365;
        printf("Voce já viveu aproximadamente %d dias.\n", dias);
    }
    printf("\n\n");
}
