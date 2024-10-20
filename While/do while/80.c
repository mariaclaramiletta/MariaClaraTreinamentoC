// Fatorial de soma
#include <stdio.h>
int main()
{
    int numero, soma = 0, i = 1;
    do
    {
        printf("Digite um numero até 1000:");
        scanf("%d", &numero);
        if (numero < 0 || numero > 1000)
        {
            printf("Numero invalido! Digite um numero entre 1 e 50.\n");
        }
    } while (numero < 0 || numero > 1000);
    while (i <= numero)
    {
        soma += i;
        i++;
    }
    printf("O resultado de %d é %d\n", numero, soma);
    printf("\n\n");
}