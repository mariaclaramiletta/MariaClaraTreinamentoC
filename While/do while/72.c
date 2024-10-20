// Contando até o número sugerido
#include <stdio.h>
int main()
{
    int numero, contador;
    printf("Digite um número:");
    scanf("%d", &numero);
    contador = 1;
    while (contador <= numero)
    {
        printf("Número %d\n", contador);
        contador++;
    }
    printf("\n\n");
}