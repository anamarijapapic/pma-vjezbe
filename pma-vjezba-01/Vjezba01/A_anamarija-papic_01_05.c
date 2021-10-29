#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dg, gg, tmp;
    int br1, br2;
    int veci;

    printf("Unesite donju granicu: ");
    scanf("%d", &dg);
    printf("Unesite gornju granicu: ");
    scanf("%d", &gg);

    if (dg > gg) /*zamjena ako su intervali obrnuto uneseni*/
    {
        tmp = dg;
        dg = gg;
        gg = tmp;
    }

    srand((unsigned)time(NULL)); /*osigurava da nije ponovljen broj*/
    br1 = dg + rand()%(gg - dg + 1);
    br2 = dg + rand()%(gg - dg + 1);

    if (br1 > br2)
        veci = br1;
    else
        veci = br2;

    printf("Generirani slucajni brojevi su: %d i %d, a veci je: %d.", br1, br2, veci);

    return 0;
}
