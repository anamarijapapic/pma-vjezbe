#include <stdio.h>

int main(void)
{
    int i, j;
    int n;

    printf("Unesite dimenziju mreze: ");
    scanf("%d", &n);

    for (i = 0; i < n + 2; i++)
    {
        for (j = 0; j < n; j++)
        {

            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
