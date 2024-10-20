// Pedir notas e mostrar maior
#include <stdio.h>
int main()
{
    float nota, maiornota = 0;
    int continuar = 1;
    printf("Digite as notas:\n");
    while (continuar)
    {
        printf("Nota: ");
        scanf("%f", &nota);

        if (nota <= 0)
        {
            continuar = 0;
        }
        else
        {
            if (nota > maiornota)
            {
                maiornota = nota;
            }
        }
    }
    printf("A maior nota é: %.2f\n", maiornota);
}
