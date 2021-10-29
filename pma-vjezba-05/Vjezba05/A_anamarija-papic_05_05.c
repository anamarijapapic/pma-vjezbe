#include <stdio.h>

unsigned setirajBajt_prvaVerzija(unsigned n, unsigned k)
{
    switch(k)
    {
    case(1):
        return n | 255; /*11111111*/
    case(2):
        return n | 65280; /*1111111100000000*/
    case(3):
        return n | 16711680; /*111111110000000000000000*/
    case(4):
        return n | 4278190080; /*11111111000000000000000000000000*/
    default:
        return 0;
    }
}

unsigned setirajBajt(unsigned n, unsigned k)
{
    int maska = (1 << 8) - 1; /*255*/
    switch(k)
    {
    case(1):
        return n | maska;
    case(2):
        return n | (maska << 8); /*65280*/
    case(3):
        return n | (maska << 16); /*16711680*/
    case(4):
        return n | (maska << 24); /*4278190080*/
    default:
        return 0;
    }
}

int main(void)
{
    unsigned n, k;

    printf("Unesite broj n: ");
    scanf("%u", &n);
    printf("Unesite redni broj bajta (1 - 4): ");
    scanf("%u", &k);

    if(setirajBajt(n, k))
        printf("\nNovi broj je: %u", setirajBajt(n, k));
    else
        printf("\nVrijednost k prelazi sizeof(unsigned)!");

    return 0;
}

