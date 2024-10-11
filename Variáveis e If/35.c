//Dias de idade
#include<stdio.h>
int main(){
    int idade, dias;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    dias = idade * 365;
    if (idade < 0) {
        printf("Idade invalida!\n");
    } else if (idade >100) {
        printf("Não existe alguém tão velho!\n");
    } else if (idade == 8) {
        printf("O usuário já viveu %d dias.\n", dias);
    } else {
        printf ("O usuário ainda não nasceu!\n");
    }
         printf ("\n\n"); 
    }

      
    
    

     