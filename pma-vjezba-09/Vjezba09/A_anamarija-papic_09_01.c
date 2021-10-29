#include <stdio.h>

#define MINOD3(a, b, c) (((a) <= (b)) ? (((a) <= (c)) ? (a) : (c)) : (((b) <= (c)) ? (b) : (c)))
#define MAXOD3(a, b, c) (((a) >= (b)) ? (((a) >= (c)) ? (a) : (c)) : (((b) >= (c)) ? (b) : (c)))

void minmaxod3(int a, int b, int c, int *najm, int *najv)
{
    *najm = MINOD3(a, b, c);
    *najv = MAXOD3(a, b, c);
}

int main(void)
{
    int a, b, c;
    int *najm, *najv;

    printf("Unesite tri broja:\n");
    scanf("%d %d %d", &a, &b, &c);

    minmaxod3(a, b, c, &najm, &najv);
    printf("Najmanji element: %d\tNajveci element: %d", najm, najv);

    return 0;
}
