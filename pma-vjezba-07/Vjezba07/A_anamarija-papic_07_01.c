#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int* vratiNiz(int *niz, int n, int a)
{
    int i;
    int *noviNiz;

    noviNiz = (int*)malloc(n * sizeof(int));
    if(!noviNiz) return NULL;

    for(i = 0; i < n; i++)
        noviNiz[i] = niz[i] * a;

    return noviNiz;
}

int main(void)
{
    int niz[MAX], n = -1, a;
    int *noviNiz;
    int i;

    while(n <= 0)
    {
        printf("Unesite broj clanova niza: ");
        scanf("%d", &n);
    }

    /*unos niza*/
    for(i = 0; i < n; i++)
    {
        printf("Unesite niz[%d]: ", i);
        scanf("%d", &niz[i]);
    }

    printf("Unesite broj s kojim zelite mnoziti clanove niza: ");
    scanf("%d", &a);

    noviNiz = vratiNiz(niz, n, a);
    if(!noviNiz) return 1;

    /*ispis novog niza*/
    printf("\nNovi niz:\n");
    for(i = 0; i < n; i++)
        printf("%d\t", noviNiz[i]);

    free(noviNiz);

    return 0;
}
