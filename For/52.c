//Media de notas
#include <stdio.h>
int main() {
    float nota, soma = 0, media;
    int i;
    for (i = 1; i <= 10; i++) {
       printf("Digite a nota %d: ", i);
       scanf("%f", &nota);
        soma += nota;
    }
    media = soma / 10;
    printf("A média das notas é: %.2f\n", media);
    printf("\n\n");
}