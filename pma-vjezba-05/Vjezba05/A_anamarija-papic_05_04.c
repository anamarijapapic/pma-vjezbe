#include <stdio.h>

/*pozicija 2^0 - 0. bit, 2^1 1. bit, 2^2 - 2. bit...*/

unsigned setiraj(unsigned n, unsigned k)
{
    return n | (1 << k);
}

unsigned provjeri(unsigned n, unsigned k)
{
    return n & (1 << k);
}

int main(void)
{
    unsigned n, k;

    printf("n = ");
    scanf("%u", &n);
    printf("k = ");
    scanf("%u", &k);

    if(provjeri(n, k))
        printf("\n%u. bit u broju %u je vec setiran na 1", k, n);
    else
        printf("\nSetiran %u. bit u broju %u -> novonastali broj: %u", k, n, setiraj(n, k));

    return 0;
}
