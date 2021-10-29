#include <stdio.h>
#define KUB(x) (x * x * x)

int main(void)
{
    int br;
    int zn1, zn2, zn3;

    printf("Unesite troznamenkasti broj: ");
    scanf("%d", &br);

    if ((br > 99) && (br < 1000))
    {
        zn1 = br / 100;
        zn2 = (br / 10) % 10;
        zn3 = br % 10;

        if (KUB(zn1) + KUB(zn2) + KUB(zn3) == br)
            printf("\n%d je Armstrongov broj.", br);
        else
            printf("\n%d nije Armstrongov broj.", br);
    }
    else
        printf("\nNiste unijeli troznamenkasti broj.");

    return 0;
}
