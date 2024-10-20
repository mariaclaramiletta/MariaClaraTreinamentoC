// Sequência de mensagens com While aninhado
#include <stdio.h>
int main()
{
    int i = 1, j = 1;
    while (i <= 40)
    {
        j = 1;
        while (j <= 3)
        {
            printf("Ola %d %d\n", i, j);
            j++;
        }
        i++;
    }
    printf("\n\n");
}