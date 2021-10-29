#include <stdio.h>

int prost(int br)
{
    int i;

    for (i = 2; i < br; i++)
    {
        if (br % i == 0)
            return 0; /*broj nije prost*/
    }
    return 1; /*broj je prost*/
}

int vratiProst(int br)
{
    while(br > 0)
    {
        ++br;
        if (prost(br))
            break; /*naden je najmanji prosti veci od br*/
    }
    return br;
}

int main(void)
{
    int n;

    printf("Unesite prirodni broj: ");
    scanf("%d", &n);

    printf("\nNajmanji prosti broj veci od %d je %d.", n, vratiProst(n));

    return 0;
}
