#include <stdio.h>

void ispisiBin(unsigned n)
{
    if(!n)
        return;
    ispisiBin(n >> 1);
    printf("%u", n & 1);
}

int main(void)
{
    unsigned n;

    printf("Unesite broj: ");
    scanf("%u", &n);
    printf("U bitovnom obliku:\n");
    ispisiBin(n);
    return 0;
}
