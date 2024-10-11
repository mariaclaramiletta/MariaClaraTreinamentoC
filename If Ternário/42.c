//Homem ou mulher
#include <stdio.h>
int main()
{
    int genero;
    printf("Digite 0 para Mulher ou 1 para Homem: ");
    scanf("%d", &genero);
    printf("%s", (genero == 0) ? "Mulher" : (genero == 1) ? "Homem" : "Desconhecido");
    printf("\n\n");
}
