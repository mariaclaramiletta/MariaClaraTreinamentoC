//Par ou ìmpar?
#include<stdio.h>
int main (){
    int numero;
    printf ("Digite um número: ");
    scanf("%d", &numero);
    printf("%s", (numero %2==0) ? "Esse número é par!" : "Esse número é ímpar!");
    printf ("\n\n");
}