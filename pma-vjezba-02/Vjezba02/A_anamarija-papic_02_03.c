#include <stdio.h>

int main(void)
{
    int a, b, m, n, i;

    printf("Unesite donju granicu intervala: ");
    scanf("%d", &a);
    printf("Unesite gornju granicu intervala: ");
    scanf("%d", &b);
    printf("Unesite cijeli broj m: ");
    scanf("%d", &m);
    printf("Unesite cijeli broj n: ");
    scanf("%d", &n);

    for(i = a; i <= b; i++)
    {
        if (i % m == 0 && i % n == 0)
            printf("\nFizzBuzz");
        else if (i % m == 0)
            printf("\nFizz");
        else if (i % n == 0)
            printf("\nBuzz");
        else
            printf("\n%d", i);
    }
    printf("\n");

    return 0;
}
