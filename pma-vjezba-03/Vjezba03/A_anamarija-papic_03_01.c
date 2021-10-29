#include <stdio.h>

int brZnamenki(unsigned br)
{
    int n;

    while (br != 0)
    {
        br /= 10;
        n++;
    }

    return n;
}

int main(void)
{
    unsigned n;
    int znam;

    printf("Unesite pozitivan broj: ");
    scanf("%d", &n);

    znam = brZnamenki(n);

    printf("\nBroj %d ima %d znamenki.", n, znam);

    return 0;
}
