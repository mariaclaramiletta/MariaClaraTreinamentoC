//Sequência de mensagens com while aninhado ao contrário
#include <stdio.h>
int main()
{
    int i = 1, j = 4;
    while (i <= 40)
    {
        j = 4;
        while (j >= 0)
        {
            printf("Ola %d %d\n", i, j);
            j--;
        }
        i++;
    }
    printf("\n\n");
}