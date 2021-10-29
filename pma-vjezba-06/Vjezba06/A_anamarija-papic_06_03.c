#include <stdio.h>
#define MAX 10

void unosNiza(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d. clan niza: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void ispisNiza(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d\t", a[i]);
}

float prosjek(int a[], int n)
{
    int i;
    float suma = 0;

    for(i = 0; i < n; i++)
        suma += a[i];

    return suma / n;
}

int main(void)
{
    int n;
    int niz[MAX];

    printf("Koliko brojeva zelite unijeti u niz (najvise 10): ");
    scanf("%d", &n);

    unosNiza(niz, n);

    printf("\nUnijeli ste niz:\n");
    ispisNiza(niz, n);

    printf("\n\nProsjecna vrijednost elemenata niza je: %.2f", prosjek(niz, n));

    return 0;
}
