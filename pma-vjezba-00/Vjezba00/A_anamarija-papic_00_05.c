#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Unesite tri broja:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Sortirano: ");
    if (a <= b && b <= c)
        printf("%d %d %d", a, b, c);
    else if (a <= c && b >= c)
        printf("%d %d %d", a, c, b);
    else if (b <= a && a <= c)
        printf("%d %d %d", b, a, c);
    else if (b <= c && a >= c)
        printf("%d %d %d", b, c, a);
    else if (c <= a && a <= b)
        printf("%d %d %d", c, a, b);
    else
        printf("%d %d %d", c, b, a);
}
