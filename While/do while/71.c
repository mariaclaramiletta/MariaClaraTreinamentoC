// Média de infinitas notas
#include <stdio.h>
int main()
{
    float nota, soma = 0, media;
    int contador = 0;
    do
    {
        printf("Digite a sua nota:");
        scanf("%f", &nota);
        if (nota >= 0)
        {
            soma += nota;
            contador++;
        }

    } while (nota >= 0);
    if (contador > 0)
    {
        media = soma / contador;
        printf("A média das notas é: %.1f\n", media);
    }
    else
    {
        printf("Nota inválida\n");
    }
    printf("\n\n");
}
