// Mostrando varias mensagens e várias variáveis
#include <stdio.h>
int main()
{
    int idade, nascimento;
    float peso = 343.45;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &nascimento);
    printf("Digite o seu peso:");
    scanf("%f", &peso);
    printf("Sua idade é %d, seu ano de nascimento é %i e seu peso é %.2f kg", idade, nascimento, peso);
    printf("\n\n");
}