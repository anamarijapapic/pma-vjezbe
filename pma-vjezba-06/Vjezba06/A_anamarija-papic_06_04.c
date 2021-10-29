#include <stdio.h>

int sumaNeparnih(int a[], int n, int* s)
{
    int i;
    for(i = 1; i < n; i += 2)
        *s += a[i];
}

int main(void)
{
    int niz[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int suma = 0;

    sumaNeparnih(niz, sizeof(niz) / sizeof(niz[0]),  &suma);

    printf("Suma elemenata niza na neparnim mjestima u nizu je: %d", suma);
}
