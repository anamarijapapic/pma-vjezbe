#include <stdio.h>

#define USEK(h, m, s) (((h) * 3600) + ((m) * 60) + (s))

typedef struct {unsigned h, m, s;} Vrijeme;

void razlikaVremena(Vrijeme v1, Vrijeme v2, Vrijeme *v)
{
    unsigned razS;
    razS = USEK(v2.h, v2.m, v2.s) - USEK(v1.h, v1.m, v1.s);

    v->h = razS / 3600;
    v->m = (razS / 60) % 60;
    v->s = razS % 60;
}

int main(void)
{
    char vr[10];
    Vrijeme v1, v2, v;

    printf("Pocetno vrijeme (format hh:mm:ss):\n");
    gets(vr);
    sscanf(vr, "%u:%u:%u", &v1.h, &v1.m, &v1.s);
    printf("Zavrsno vrijeme (format hh:mm:ss):\n");
    gets(vr);
    sscanf(vr, "%u:%u:%u", &v2.h, &v2.m, &v2.s);

    razlikaVremena(v1, v2, &v);
    printf("\nRazlika vremena: %u:%u:%u\n", v.h, v.m, v.s);

    return 0;
}
