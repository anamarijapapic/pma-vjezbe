#include <stdio.h>

int main(void)
{
    int h1, m1, s1, h2, m2, s2;
    int poc, kr, tr;
    int h, m, s;

    printf("Unesite vrijeme pocetka filma:\n");
    printf("Sati: ");
    scanf("%d", &h1);
    printf("Minute: ");
    scanf("%d", &m1);
    printf("Sekunde: ");
    scanf("%d", &s1);

    printf("Unesite vrijeme zavrsetka filma:\n");
    printf("Sati: ");
    scanf("%d", &h2);
    printf("Minute: ");
    scanf("%d", &m2);
    printf("Sekunde: ");
    scanf("%d", &s2);

    poc = s1 + (m1 * 60) + (h1 * 3600);
    kr = s2 + (m2 * 60) + (h2 * 3600);
    tr = kr - poc;

    h = tr / 3600;
    m = (tr / 60) % 60;
    s = tr % 60;

    printf("Trajanje filma je: %d:%d:%d (h/m/s)", h, m, s);

    return 0;
}
