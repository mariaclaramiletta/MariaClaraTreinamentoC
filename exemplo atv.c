// Homem ou Mulher
#include <stdio.h>
int main()
{
    int genero;
    printf("Digite o gênero (0 para Mulher ou 1 para Homem): ");
    scanf("%d", &genero);
    if (genero == 0)
    {
        printf("Mulher\n");
    }
    else if (genero == 1)
    {
        printf("Homem\n");
    }
    else
    {
        printf("Desconhecido\n");
    }
}