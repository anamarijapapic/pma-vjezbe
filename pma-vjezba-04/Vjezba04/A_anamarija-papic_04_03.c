#include <stdio.h>

int vratiVrijednost(int n)
{
    if(n % 2) /*neparan*/
        return 3 * n + 1;
    return n / 2; /*paran*/
}

int main(void)
{
    int br;

    printf("Unesite broj: ");
    scanf("%d", &br);

    printf("Vracena vrijednost: %d", vratiVrijednost(br));

    return 0;
}
