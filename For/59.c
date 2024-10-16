// Pedir notas e mostrar a menor, maior e média
#include <stdio.h>
int main()
{
    float nota, maiornota, menornota, soma = 0;
    int i;
    maiornota = 0;
    menornota = 100;
    for (i = 1; i <= 10; i++)
    {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        if (nota > maiornota)
        {
            maiornota = nota;
        }
        if (nota < menornota)
        {
            menornota = nota;
        }
        soma += nota;
    }
    float media = soma / 10;
    printf("A maior nota é: %.2f\n", maiornota);
    printf("A menor nota é: %.2f\n", menornota);
    printf("A média das notas é: %.2f\n", media);
    printf("\n\n");
}