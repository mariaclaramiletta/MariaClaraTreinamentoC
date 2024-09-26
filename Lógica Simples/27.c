// Cálculo de porcentagem de impostos dinâmico
#include<stdio.h>
int main() {
    float salario, salario_liquido, imposto, porcentagem;
    printf("Digite o seu salário: ");
    scanf("%f", &salario);
    printf("Digite a porcentagem de desconto de impostos: ");
    scanf("%f", &porcentagem);
    // Convertendo a porcentagem para decimal (dividindo por 100)
    porcentagem /= 100;
    imposto = salario * porcentagem;
    salario_liquido = salario - imposto;
    printf("O salário líquido é R$ %.2f e o valor do imposto é R$ %.2f\n", salario_liquido, imposto);
    printf("\n\n");
}