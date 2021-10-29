#include <stdio.h>

unsigned sumaProdukt(unsigned* n, unsigned* s, unsigned* p)
{
    unsigned znam;

    while(*n)
    {
        znam = *n % 10;
        *s += znam;
        *p *= znam;
        *n /= 10;
    }
}

int main(void)
{
    unsigned n, sum = 0, prod = 1;

    printf("Unesite prirodni broj n: ");
    scanf("%u", &n);

    sumaProdukt(&n, &sum, &prod);

    printf("Suma je %u, a produkt je %u", sum, prod);

    return 0;
}
