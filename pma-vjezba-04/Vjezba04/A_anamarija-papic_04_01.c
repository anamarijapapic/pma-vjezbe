#include <stdio.h>
void ispisi(int n, int k)
{
    int max_k = k;
    int pot = 0;
    int koef;

    printf("%d = ", n);

    if(n == 0)
        printf("%d * %d**(bilo koja vrijednost potencije)", n, k);
    else
    {
        while(n > 0)
        {
            pot = 0;
            max_k = k;
            while(max_k <= n) /*pronalazak najvece potencije - (stupanj polinoma)*/
            {
                max_k *= k;
                ++pot;
            }

            koef = n / (max_k/k); /*pronalazak koeficijenta u polinomu*/
            n -= koef * (max_k / k); /*ostatak*/

            if(koef > 0)
                printf("%d * %d**%d", koef, k, pot);

            if(n) /*ispis plusa ako broj nije 0 - znaci da imamo jos clanova u polinomu*/
                printf(" + ");
        }
    }
}

int main(void)
{
    int n = -1, k = 0;

    while(n < 0)
    {
        printf("Unesite broj n (ne smije biti negativan): ");
        scanf("%d", &n);
    }

    while (k < 2 || k > 16)
    {
        printf("Unesite broj k (2-16): ");
        scanf("%d", &k);
    }

    ispisi(n, k);

    return 0;
}
