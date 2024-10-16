// Troca de variáveis 2
#include <stdio.h>
int main()
{
    int x = 1, y = 2, z = 3, k = 4, i = 5;
    int aux = x;
    x = y;
    y = z;
    z = k;
    k = i;
    i = aux;
    printf("x:%d,y:%d,z:%d,k:%d,i:%d\n", x, y, z, k, i);
    printf("\n\n");
}