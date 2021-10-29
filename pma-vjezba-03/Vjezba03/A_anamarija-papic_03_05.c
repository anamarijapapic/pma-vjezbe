#include <stdio.h>
int promijeni(int br)
{
    int ost;
    int novipom = 0;
    int novi = 0;
    while(br != 0)
    {
        ost = br % 10;
        if (ost == 9)
            ost = -1;
        novipom = (novipom * 10) + (ost + 1);
        br /= 10;
        /*ovo radi obrnut redosljed znamenki pa treba okrenuti*/
    }

    /*okretanje broja*/
    while (novipom > 0)
    {
        ost = novipom % 10;
        novi = (novi * 10) + ost;
        novipom /= 10;
    }

    return novi;
}

int main(void)
{
    int n = 0;

    while(n < 100000)
    {
        printf("Unesite peteroznamenkasti broj: ");
        scanf("%d", &n);

        if (n < 9999)
            continue;
        else
        {
            printf("%d", promijeni(n));
            break;
        }
    }
    return 0;
}
