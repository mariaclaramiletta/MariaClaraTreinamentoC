//Idade por ano e descrição
#include <stdio.h>
int main() {
    int ano_nascimento, ano_atual, idade;
    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &ano_nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    idade = ano_atual - ano_nascimento;
    if (idade < 0) {
        printf("O usuário ainda não nasceu!\n");
    } else if (idade == 0) {
        printf("O usuário nasceu esse ano!\n");
    } else if (idade <= 11) {
        printf("O usuário tem %d anos e é criança.\n", idade);
    } else {
        printf("O usuário tem %d anos e é velho.\n", idade);
    }
    printf("\n\n");
}
    
