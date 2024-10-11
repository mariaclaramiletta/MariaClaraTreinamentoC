// Idade para dirigir
#include <stdio.h>
int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade < 0)
    {
        printf("Idade invalida.\n");
    }
    else if (idade < 18)
    {
        printf("Não tem idade para dirigir.\n");
    }
    else
    {
        printf("Pode dirigir\n");
    }
}
