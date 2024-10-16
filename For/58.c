#include <stdio.h>
int main()
{
    float nota, menornota;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota);
    menornota = nota;
    for (int i = 1; i < 10; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota);
        if (nota < menornota)
        {
            menornota = nota;
        }
    }
    printf("A menor nota é: %2.f\n", menornota);
    printf("\n\n");
}