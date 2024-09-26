// Troca de variáveis 1
#include<stdio.h> 
int main (){
    int x = 1, y = 2;
    int aux = x; x = y; y = aux;
    printf("O valor de x é %d e de y é %d\n",x , y);
    printf("\n\n");
}