#include <stdio.h>

int validanDatum(int d, int m, int g);

int prijestupna(int g);

int kolikoGodina(char *datum)
{
    int d, m, g;
    int td = 23, tm = 5, tg = 2021; /*trenutni datum*/
    int i, cnt = -1;

    sscanf(datum, "%d.%d.%d", &d, &m, &g);

    if(validanDatum(d, m, g))
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

int main(void)
{
    char datum[20];
    int god;

    printf("Unesite datum rodenja u formatu DD.MM.YYYY:\n");
    gets(datum);

    god = kolikoGodina(datum);
    if(god < 0)
        return 1; /*datum nije validan*/

    printf("\nOsoba s tim datumom rodenja ima %d godina.", god);

    return 0;
}

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
