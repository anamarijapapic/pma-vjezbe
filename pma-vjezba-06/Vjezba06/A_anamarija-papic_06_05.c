#include <stdio.h>
#define MAX 10

unsigned sumaProdukt(int* a, int m, int n, int* s, int* p)
{
    int i;
    for(i = m; i <= n; i++)
    {
        *s += a[i];
        *p *= a[i];
    }
}

int main(void)
{
    int i;
    int niz[MAX];
    int t;
    int br = -1, m = -1, n = -1;
    int suma = 0;
    int produkt = 1;

    while(br > 10 || br <= 0)
    {
        printf("Koliko brojeva zelite unijeti u niz (najvise 10): ");
        scanf("%d", &br);
    }

    printf("Unesite clanove niza:\n");
    for(i = 0; i < br; i++)
    {
        printf("Unesite niz[%d]: ", i);
        scanf("%d", &niz[i]);
    }

    printf("\nUnesite brojeve m i n (oznacavaju indekse):");
    while(m < 0 || m >= br)
    {
        printf("\nm = ");
        scanf("%d", &m);
    }
    while(n < 0 || n >= br)
    {
        printf("n = ");
        scanf("%d", &n);
    }
    if(m > n) /*zamjena*/
    {
        t = m;
        m = n;
        n = t;
    }

    sumaProdukt(niz, m, n, &suma, &produkt);
    printf("Suma je %d, a produkt %d", suma, produkt);

    return 0;
}
