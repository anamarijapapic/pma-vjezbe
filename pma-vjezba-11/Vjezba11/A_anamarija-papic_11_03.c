#include <stdio.h>

int palindrom(unsigned br, unsigned const pom)
{
    static unsigned rev = 0;
    if(br > 0)
    {
        rev = rev * 10 + br % 10;
        palindrom(br / 10, pom);
    }
    else if(rev == pom)
        return 1;
    else
        return 0;
}

int main(void)
{
    unsigned br, pom;
    printf("Unesite broj: ");
    scanf("%u", &br);
    pom = br;

    if(palindrom(br, pom))
        printf("Broj je palindrom.");
    else
        printf("Broj nije palindrom.");

    return 0;
}
