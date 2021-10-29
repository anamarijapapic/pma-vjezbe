#include <stdio.h>

#define OPL(a, b, c) (2 * (((a)*(b)) + ((a)*(c)) +((b)*(c))))
#define VOL(a, b, c) ((a) * (b) * (c))

typedef struct {double a, b, c;} kvadar;

void izracunaj(kvadar k, double *o, double *v)
{
    *o = OPL(k.a, k.b, k.c);
    *v = VOL(k.a, k.b, k.c);
}

int main(void)
{
    kvadar k;
    double o, v;

    printf("Unesite duljine bridova kvadra:\n");
    printf("a = ");
    scanf("%lf", &k.a);
    printf("b = ");
    scanf("%lf", &k.b);
    printf("c = ");
    scanf("%lf", &k.c);

    izracunaj(k, &o, &v);
    printf("Oplosje kvadra: %.2lf\nVolumen kvadra: %.2lf", o, v);

    return 0;
}
