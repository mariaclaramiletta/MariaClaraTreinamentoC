// Pedir notas e mostrar maior
#include <stdio.h>
int main()
{
    float nota, maiornota;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota);
    maiornota = nota;
    for (int i = 1; i < 10; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota);
        if (nota > maiornota)
        {
            maiornota = nota;
        }
    }
    printf("A maior nota é: %2.f\n", maiornota);
    printf("\n\n");
}