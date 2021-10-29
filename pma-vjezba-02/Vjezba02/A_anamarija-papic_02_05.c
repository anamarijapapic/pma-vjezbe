#include <stdio.h>

int main(void)
{
    int a, b, n, i;
    int zbr = 0;

    printf("Unesite donju granicu intervala: ");
    scanf("%d", &a);
    printf("Unesite gornju granicu intervala: ");
    scanf("%d", &b);
    printf("Unesite cijeli broj n: ");
    scanf("%d", &n);

    for(i = a; i <= b; i += n)
        zbr = zbr + i;

    printf("\nZbroj: %d", zbr);

    return 0;
}
