//Aposentados, H e M
#include <stdio.h>
int main (){
    int sexo, idade;
    printf ("Digite o seu sexo (0 para mulher e 1 para homem):");
    scanf ("%d", &sexo);
    printf ("Digite a sua idade:");
    scanf ("%d", &idade);
    if (sexo == 0 && idade >= 60) {
        printf ("Pode aposentar.\n");
    }else if (sexo == 1 && idade >= 65){
        printf ("Pode aposentar.\n");
    }else {
        printf ("Não pode aposentar.\n");
    }printf ("\n\n");
}