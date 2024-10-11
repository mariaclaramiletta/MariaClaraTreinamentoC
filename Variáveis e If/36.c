// Par ou Ímpar
#include <stdio.h> 
int main (){
    int número;
    printf ("Digite um número: ");
    scanf ("%d", &número);
    if (número %2==0){
        printf("O número %d é par!\n", número);
    }else {
        printf ("O número %d é ímpar!\n", número);
    } printf ("\n\n");
}