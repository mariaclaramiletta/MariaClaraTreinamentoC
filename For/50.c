// Sequência de mensagens com for aninhado ao contrário
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 40; i++)
    {
        for (int j = 4; j >= 0; j--)
        {
            printf("Olá %d %d\n", i, j);
        }
        printf("\n\n");
    }
}
