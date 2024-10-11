//Descrição de números
#include<stdio.h>
int main(){
    int numero;
    printf ("Digite um número de 0 á 10:");
    scanf("%i", &numero);
    if (numero == 0) {
        printf("Zero\n");
    }else if (numero == 1){
        printf("Um\n");
    }else if (numero == 2){
        printf("Dois\n");
    }else if (numero == 3){
        printf("Tres\n");
    }else if (numero == 4){
        printf("Quatro\n");
    }else if (numero == 5){
        printf ("Cinco\n");
    }else if (numero == 6){
        printf ("Seis\n");
    }else if (numero == 7){
        printf("Sete\n");
    }else if (numero == 8){
        printf("Oito\n");
    }else if(numero == 9){
        printf("Nove\n");
    }else if (numero == 10){
        printf("Dez\n");
    }else {
        printf ("Desconhecido");
    }
}
    
    


