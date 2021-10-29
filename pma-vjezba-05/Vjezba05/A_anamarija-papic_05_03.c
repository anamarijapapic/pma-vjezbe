#include <stdio.h>

void bin_ispis(unsigned n)
{
    //rekurzivno - 1. kol. 2015/16 ljeto
    /*if (!n) return;
    bin_ispis(n >> 1);
    printf("%d", n & 1);*/

    //izgradnja broja kao dekadski - manjkavo
    /*unsigned bin;
    unsigned poz = 1;
    while(n)
    {
        bin += (n & 1) * poz; //n & 1 kao n % 2
        n >>= 1; //n >> 1 kao n / 2
        poz *= 10; //podesavanje pozicije
    }
    printf("%u", bin);*/

    //ispisuje se naopako
    /*while(n)
    {
        printf("%u", n & 1);
        n >>= 1;
    }*/

    int i;
    int cnt = 0;
    int br = n;

    while(br) //odredivanje koliko broj zauzima bitova
    {
        br >>= 1;
        ++cnt;
    }

    for(i = cnt - 1; i >= 0; i--)
    {
        if((n & (1 << i)))
            printf("1");
        else
            printf("0");
    }
}

int main(void)
{
    unsigned n;

    printf("n = ");
    scanf("%u", &n);

    printf("Binarni zapis:\n");
    bin_ispis(n);

    return 0;
}
