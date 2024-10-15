#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (int i = 1; i <= numero; i++)
    {
        printf("numero %d\n", i);
        printf("\n\n");
    }
}