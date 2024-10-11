// Cálculo simples divisão
#include <stdio.h>
int main()
{
    float num1, num2, resultado;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    if (num2 == 0)
    {
        printf("Impossivel dividir por 0.\n");
    }
    else
    {
        resultado = num1 / num2;
        printf("O resultado da divisao é: %.2f\n", resultado);
        printf("\n\n");
    }
}
