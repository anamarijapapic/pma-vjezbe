#include <stdio.h>

int validanDatum(int d, int m, int g)
{
    if (d > 0 && m > 0 && m <= 12)
    {
        if(m == 2 && ((prijestupna(g) && d <= 29) || (prijestupna(g) == 0 && d <= 28)))
            return 1;
        else if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30)
            return 1;
        else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d <= 31)
            return 1;
    }
    return 0;
}

int prijestupna(int g)
{
    if ((g % 4 == 0 && g % 100 != 0) || (g % 400 == 0))
        return 1;
    return 0;
}

int main (void)
{
    int n, d, m, g;
    int i;

    printf("Za koliko osoba zelite unijeti datum rodenja: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\n%d. osoba", i+1);
        printf("\nDan: ");
        scanf("%d", &d);
        printf("Mjesec: ");
        scanf("%d", &m);
        printf("Godina: ");
        scanf("%d", &g);

        if(validanDatum(d, m, g) && prijestupna(g))
            printf("\nvalidan - prijestupna\n");
        else if(validanDatum(d, m, g) && prijestupna(g) == 0)
            printf("\nvalidan - nije prijestupna\n");
        else
            printf("\nnije validan\n");
    }

    return 0;
}
