//Sequência de mensagens com for aninhado
#include <stdio.h>

int main(){
    for (int i = 1; i <= 40; i++) {
    for (int j = 1; j <= 3; j++) {
    printf("Olá %d %d\n", i, j);
    }
    }
}
    