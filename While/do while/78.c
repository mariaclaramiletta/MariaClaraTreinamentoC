// Pedir notas e mostrar a menor, maior e média
#include <stdio.h>
int main()
{
    float nota, maiorNota, menorNota, soma = 0;
    int contador = 0;
    printf("Digite as notas :\n");
    while (1)
    {
        printf("Nota: ");
        scanf("%f", &nota);
        if (nota > 0)
        {
            if (nota > maiorNota)
            {
                maiorNota = nota;
            }
            if (nota < menorNota)
            {
                menorNota = nota;
            }
            soma += nota;
            contador++;
        }
        else
        {
            break;
        }
    }
    if (contador > 0)
    {
        float media = soma / contador;
        printf("A maior nota é: %.2f\n", maiorNota);
        printf("A menor nota é: %.2f\n", menorNota);
        printf("A média das notas é: %.2f\n", media);
    }
    else
    {
        printf("Nenhuma nota válida foi digitada.\n");
    }
}
