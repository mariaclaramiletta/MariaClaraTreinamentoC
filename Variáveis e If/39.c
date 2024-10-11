//Adultos e Gênero
#include<stdio.h>
int main()
{
    int sexo, idade;
    printf ("Digite o seu sexo (0 para mulher e 1 para homem):");
    scanf ("%d", &sexo);
    printf ("Digite a sua idade:");
    scanf ("%d", &idade);
    if (sexo == 0 && idade < 10){
        printf ("Mulher e criança");
    }else if (sexo == 0 && idade < 18){
        printf ("Mulher e adolescente");
    }else if (sexo == 0 && idade > 18){
        printf ("Mulher e adulta");
    }else if (sexo == 1 && idade < 10){
        printf ("Homem e criança");
    }else if (sexo == 1 && idade < 18){
        printf ("Homem e adolescente");
    }else{
        printf ("Homem e adulto");
    }printf("\n\n");
}
