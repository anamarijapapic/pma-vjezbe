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

int rodendani(int d, int m, int g)
{
    /*trenutni datum*/
    int td = 12;
    int tm = 4;
    int tg = 2020;

    int i;
    int cnt = 0;
    if(d == 29 && m == 2 && prijestupna(g)) /*poseban slucaj: osobe rodene 29.2.gggg.*/
    {
        for(i = g; i <= tg; i++)
            if(prijestupna(i))
            {
                if(i == tg)
                {
                    if((tm >= m) && (td >= d))
                        cnt++;
                }
                else
                    cnt++;
            }
    }
    else /*svi ostali*/
    {
        for(i = g; i <= tg; i++)
        {
            if(i == tg)
            {
                if((tm >= m) && (td >= d))
                    cnt++;
            }
            else
                cnt++;
        }
    }
    return cnt;
}

int main (void)
{
    int n, d, m, g = 1900;
    int i;

    printf("Unesite datume rodendana:\n");

    while(prijestupna(g) == 0)
    {
        printf("Dan: ");
        scanf("%d", &d);
        printf("Mjesec: ");
        scanf("%d", &m);
        printf("Godina: ");
        scanf("%d", &g);

        if(validanDatum(d, m, g))
           printf("\nOsoba rodena %d.%d.%d. slavila bi do sad %d rodendana.\n\n", d, m, g, rodendani(d, m, g));
        else
            printf("\nDatum nije validan!\n\n");
    }

    return 0;
}
