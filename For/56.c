// A tabuada
#include <stdio.h>
int main()
{
    int numero, resultado;
    printf("Digite um numero para ver a sua tabuada: ");
    scanf("%d", &numero);
    for (int i = 1; i <= 10; i++)
    {
        resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }
    printf("\n\n");
}