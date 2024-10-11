//Transformar número negativo em positivo
#include<stdio.h>
int main (){
    int numero;
    printf ("Digite um número: ");
    scanf ("%d", &numero);
    if (numero <0){
        printf ("O numero ficará %d.", numero *-1);
    }else {
        printf ("O numero positivo é %d.\n", numero);
    } printf ("\n\n");
}