// A tabuada
#include <stdio.h>
int main()
{
    int numero, contador;
    printf("Digite um numero para ver a sua tabuada: ");
    scanf("%d", &numero);
    while (contador <= 10)
    {
        printf("%d x %d = %d\n", numero, contador, numero * contador);
        contador++;
    }
    printf("\n\n");
}