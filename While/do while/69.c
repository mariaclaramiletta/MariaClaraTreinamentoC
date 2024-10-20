// Super while aninhado
#include <stdio.h>
int main()
{
    int i, j, k;
    i = 1;
    while (i <= 100)
    {
        j = 1;
        while (j <= 100)
        {
            k = 1;
            while (k <= 100)
            {
                printf("Ola %d %d %d\n", i, j, k);
                k++;
            }
            j++;
        }
        i++;
    }
    printf("\n\n");
}