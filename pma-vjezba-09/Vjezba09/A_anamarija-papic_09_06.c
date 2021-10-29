#include <stdio.h>

#define COUNTOF(x) (sizeof(x)/sizeof((x)[0]))

typedef struct {unsigned r, g, b;} BojaRGB;

typedef struct
{
    float x, y, z;
    BojaRGB boja;
} Tocka;

int rNajzastupljenija(Tocka* niz, int n)
{
    int i, cnt = 0;
    for(i = 0; i < n; i++)
        if(niz[i].boja.r > niz[i].boja.b && niz[i].boja.r > niz[i].boja.g)
            cnt++;
    return cnt;
}

int main(void)
{
    Tocka nizT[] = {{-1, 0, 2, {200, 50, 10}}, {4, 1, 2.5, {20, 255, 30}}, {5, 1.5, -2, {100, 0, 70}}, {3, 3, 3, {50, 100, 200}}};
    unsigned n = COUNTOF(nizT);

    printf("Crvena boja najzastupljenija je kod %d tocke.", rNajzastupljenija(nizT, n));

    return 0;
}
