#include <stdio.h>

unsigned funkcija(unsigned* m, unsigned* n)
{
    if(!(*m % 2))
        *m /= 2;
    *n = 3 * *n + 1;
}

int main(void)
{
    unsigned m, n;

    printf("Unesite dva prirodna broja: ");
    printf("\nm = ");
    scanf("%u", &m);
    printf("n = ");
    scanf("%u", &n);

    funkcija(&m, &n);

    printf("\nNove vrijednosti su: m = %u, n = %u", m, n);

    return 0;
}
