// Pedir notas e mostrar menor
#include <stdio.h>
int main()
{
    float nota, menornota = 0;
    int continuar = 1;
    printf("Digite a nota:\n");
    while (continuar)
    {
        printf("Nota: ");
        scanf("%f", &nota);
        if (nota < 0)
        {
            continuar = 0;
        }
        else
        {
            if (nota < menornota)
            {
                menornota = nota;
            }
        }
    }
    printf("A menor nota é : %.2f\n", menornota);
    printf("\n\n");
}