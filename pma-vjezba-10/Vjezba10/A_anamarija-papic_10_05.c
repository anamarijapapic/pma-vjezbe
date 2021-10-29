#include <stdio.h>
#include <stdlib.h>
#define VEL 4

typedef struct {float x, y;} Tocka;

typedef struct {Tocka a, b, c;} Trokut;

void zapisiBin(FILE* fp, Trokut* niz, int n)
{
    fwrite(niz, n, sizeof(Trokut), fp);
}

void citajBinarnu(FILE* fp, int n)
{
    int i;
    Trokut* bin = (Trokut*)malloc(VEL * sizeof(Trokut));
    fread(bin, n, sizeof(Trokut), fp);
    for(i = 0; i < n; i++)
        printf("Trokut %d: A(%0.2f, %0.2f), B(%0.2f, %0.2f), C(%0.2f, %0.2f)\n", i + 1, bin[i].a.x, bin[i].a.y, bin[i].b.x, bin[i].b.y, bin[i].c.x, bin[i].c.y);
    free(bin);
}

int main(void)
{
    Trokut niz[] = {{{-1, -2}, {0, 2}, {2, 4}}, {{4, 1}, {1, 5}, {2.5, -3}}, {{5, 0}, {1.5, -2}, {-1, -1}}, {{3, 3}, {1, 2}, {0, 0}}};
    FILE* fp = fopen("datoteka5.bin", "wb");
    if(!fp)
        return 1;

    zapisiBin(fp, niz, VEL);
    fclose(fp);

    fp = fopen("datoteka5.bin", "rb");
    if(!fp)
        return 1;

    citajBinarnu(fp, VEL);
    fclose(fp);

    return 0;
}
