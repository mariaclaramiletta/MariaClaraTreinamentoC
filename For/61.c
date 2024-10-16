// Fatorial de soma
#include <stdio.h>
int main()
{
    int num, soma = 0;
    printf("Digite um numero menor que 1000: ");
    scanf("%d", &num);
    if (num < 0 || num > 1000)
    {
        printf("Número invalido!\n");
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            soma += i;
        }
        printf("O resultado de %d é: %d\n", num, soma);
    }
    printf("\n\n");
}