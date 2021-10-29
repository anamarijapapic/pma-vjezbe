#include <stdio.h>

int main(void)
{
    int iznos;
    int br5, br2, br1;

    printf("Unesite iznos: ");
    scanf("%d", &iznos);

    br5 = iznos / 5;
    br2 = (iznos - (br5 * 5)) / 2;
    br1 = iznos - (br5 * 5) - (br2 * 2);

    printf("\nZa iznos %d kn treba upotrijebiti %d kovanica od 5 kn, %d od 2 kn i %d od 1 kn.", iznos, br5, br2, br1);

    return 0;
}
