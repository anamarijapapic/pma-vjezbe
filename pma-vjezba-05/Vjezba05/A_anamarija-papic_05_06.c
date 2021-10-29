#include <stdio.h>

int vodeceNule(unsigned n)
{
    int br = 0;
    while(n)
    {
        n >>= 1;
        br++; /*broji koliko bitova zauzima n*/
    }
    return 32 - br; /*od puna 32 bita oduzimamo broj bitova koji zauzima n*/
}

int main(void)
{
    unsigned n;

    printf("n = ");
    scanf("%u", &n);

    printf("\nBroj vodecih nula je: %d", vodeceNule(n));

    return 0;
}
