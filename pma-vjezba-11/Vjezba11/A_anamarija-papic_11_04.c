#include <stdio.h>

void ispisiNeparne(int n)
{
    if(n < 1)
        return;
    if(n % 2 == 1)
        printf("%d\n", n);
    ispisiNeparne(n - 1);
}

int main(void)
{
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    ispisiNeparne(n);
    return 0;
}
