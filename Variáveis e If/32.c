// Idades e suas descrições
#include <stdio.h>
int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Ainda não nasceu.\n");
    } else if (idade <= 10) {
        printf("Criança\n");
    } else if (idade <= 18) {
        printf("Adolescente\n");
    } else if (idade <= 70) {
        printf("Adulto\n");
    } else 
        printf("Idoso\n");
}
    