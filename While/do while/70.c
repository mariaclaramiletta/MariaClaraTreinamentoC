// Média de notas
#include <stdio.h>
int main()
{
    float nota, soma = 0.0, media;
    int i = 1;
    while (i <= 10)
    {
        printf("Digite a %d nota: ", i);
        scanf("%f", &nota);
        soma += nota;
        i++;
    }
    media = soma / 10;
    printf(" A média das notas é: %.2f\n", media);
    printf("\n\n");
}