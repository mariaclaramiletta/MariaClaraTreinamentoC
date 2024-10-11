//Sistema de comparação
#include <stdio.h>
int main() {
    float num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    if (num1 > num2) {
        printf("O número %.f é maior que %.f\n", num1, num2);
    } else if (num2 > num1) {
        printf("O número %.f é maior que %.f\n", num2, num1);
    } else {
        printf("Ambos os números são iguais\n");
    }
    printf ("\n\n");
}
    