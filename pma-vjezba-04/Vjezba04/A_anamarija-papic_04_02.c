#include <stdio.h>

int ntiClan(int a1, int d, int n)
{
    int cnt = 0;
    for(a1;;a1 = a1 + d)
    {
        cnt++; /*redni broj clana niza*/
        if(cnt == n)
            return a1;
    }
}

int main(void)
{
    int a1, d, n;

    printf("Unesite prvi clan niza: ");
    scanf("%d", &a1);
    printf("Unesite udaljenost medu clanovima: ");
    scanf("%d", &d);
    printf("Koji po redu clan niza Vas zanima: ");
    scanf("%d", &n);

    printf("\n%d. clan niza je: %d", n, ntiClan(a1, d, n));

    return 0;
}
