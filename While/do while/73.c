// Contando até 0 a partir do sugerido
#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um número:");
    scanf("%d", &numero);
    while (numero >= 0)
    {
        printf("Número %d\n", numero);
        numero--;
    }
    printf("\n\n");
}