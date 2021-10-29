#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void ispisNiza(int *niz, int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d  ", niz[i]);
}

int* spajanjeNizova(int *niz1, int *niz2, int *niz3, int n1, int n2, int n3, int *n)
{
    int l = n1 + n2 + n3; /*duljina novonastalog niza*/
    int *niz = (int*)malloc(l * sizeof(int));
    int i;

    for(i = 0; i < l; i++)
    {
        if(i < n1) /*ubacivanje niza1 u niz*/
            niz[i] = niz1[i];
        else if(i >= n1 && i < l - n2) /*ubacivanje niza3 u niz, nakon niza1*/
            niz[i] = niz3[i - n1];
        else /*ubacivanje niza2 u niz, nakon niza1 i niza3*/
            niz[i] = niz2[i - (n1 + n3)];
    }

    *n = n1 + n2 + n3; /*duljina novonastalog niza*/

    return niz;
}

int main(void)
{
    int niz1[] = {1, 2, 3};
    int n1 = sizeof(niz1)/sizeof(*niz1);
    int niz2[] = {4, 5, 6};
    int n2 = sizeof(niz2)/sizeof(*niz2);
    int niz3[MAX], n3 = -1;
    int *novonastaliNiz, *n = 0;
    int i;

    /*unos treceg niza*/
    while(n3 <= 0)
    {
        printf("Unesite broj clanova 3. niza: ");
        scanf("%d", &n3);
    }
    for(i = 0; i < n3; i++)
    {
        printf("niz3[%d]: ", i);
        scanf("%d", &niz3[i]);
    }

    printf("\nniz1: ");
    ispisNiza(niz1, n1);
    printf("\nniz2: ");
    ispisNiza(niz2, n2);
    printf("\nniz3: ");
    ispisNiza(niz3, n3);

    novonastaliNiz = spajanjeNizova(niz1, niz2, niz3, n1, n2, n3, &n);
    printf("\n\nNovonastali niz: ");
    ispisNiza(novonastaliNiz, n);
    printf("\n(Duljina novonastalog niza = %d)", n);

    free(novonastaliNiz);

    return 0;
}
