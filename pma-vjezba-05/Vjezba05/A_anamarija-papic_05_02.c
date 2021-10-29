#include <stdio.h>

int funkcija(int a, int b);

int main(void)
{
    int a, b;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    printf("\nRezultat: %d", funkcija(a, b));

    return 0;
}

int funkcija(int a, int b)
{
    return a >= b ? a - b : a + b;
}
