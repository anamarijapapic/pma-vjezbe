#include <stdio.h>

void ispisiNiz(int n)
{
    while (1)
    {
        printf("%d ", n);
        if (n == 1) /*niz zavrsava jedinicom*/
            break;
        else if(n % 2) /*neparan*/
            n = 3 * n + 1;
        else /*paran*/
            n = n / 2;
    }
}

int main(void)
{
    int br;

    printf("Unesite broj: ");
    scanf("%d", &br);

    printf("Niz je:\n");
    ispisiNiz(br);

    return 0;
}
