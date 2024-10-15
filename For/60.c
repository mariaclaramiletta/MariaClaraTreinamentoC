// Fatorial
#include <stdio.h>
int main()
{
    int num, fatorial = 1;
    printf("Digite um numero menor que 10: ");
    scanf("%d", &num);
    if (num < 0 || num > 10)
    {
        printf("Número invalido!\n");
    }
    else
    {
        for (int i = num; i > 1; i--)
        {
            fatorial *= i;
        }
        printf("O fatorial de %d é: %d\n", num, fatorial);
    }
    printf("\n\n");
}