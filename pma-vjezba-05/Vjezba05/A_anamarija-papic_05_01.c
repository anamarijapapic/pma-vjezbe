#include <stdio.h>

int min_od3(int a, int b, int c)
{
    return a < b ? (a < c ? a : c) : (b < c ? b : c);
}

int main(void)
{
    int a, b, c;

    printf("Unesite tri broja:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    printf("\nNajmanji od tri broja je %d.", min_od3(a, b, c));

    return 0;
}
