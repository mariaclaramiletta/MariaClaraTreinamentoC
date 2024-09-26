// Cálculo de porcentagem de impostos
#include<stdio.h>
int main (){
    float salario, salario_liquido, imposto;
    printf("Digite o seu salário: ");
    scanf("%f", &salario);
    imposto = salario * 0.655;
    salario_liquido = salario - imposto;
    printf("O salário líquido é R$ %.2f e o valor do imposto é R$ %.2f\n", salario_liquido, imposto);
    printf("/n/n");
}

