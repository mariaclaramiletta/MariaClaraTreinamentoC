// Fatorial
#include <stdio.h>
int main()
{
    int numero, fatorial = 1;
    do
    {
        printf("Digite um numero até 50:");
        scanf("%d", &numero);
        if (numero < 0 || numero > 50)
        {
            printf("Numero invalido! Digite um numero entre 1 e 50.\n");
        }
    } while (numero < 0 || numero > 50);
    int i = 1;
    while (i <= numero)
    {
        fatorial *= i;
        i++;
    }
    printf("O fatorial de %d é %d\n", numero, fatorial);
    printf("\n\n");
}
