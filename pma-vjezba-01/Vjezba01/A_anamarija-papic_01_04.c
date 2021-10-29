#include <stdio.h>

int main(void)
{
    float d1, g1, d2, g2;
    float dg, gg;

    printf("Unesite donju granicu 1. intervala: ");
    scanf("%f", &d1);
    printf("Unesite gornju granicu 1. intervala: ");
    scanf("%f", &g1);
    printf("Unesite donju granicu 2. intervala: ");
    scanf("%f", &d2);
    printf("Unesite gornju granicu 2. intervala: ");
    scanf("%f", &g2);

    if (d1 > d2)
        dg = d1;
    else
        dg = d2;

    if (g1 < g2)
        gg = g1;
    else
        gg = g2;

    if (dg < gg)
        printf("Presjek dvaju intervala je [%.1f, %.1f]", dg, gg);
    else
        printf("Presjek dvaju intervala je prazan skup.");

    return 0;
}
