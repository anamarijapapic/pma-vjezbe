#include <stdio.h>

int main(void)
{
    unsigned int br;
    /*max value unsigned int = 4294967295 */
    int n;

    printf("Unesite pozitivan cijeli broj: ");
    scanf("%u", &br);

    while (br != 0)
        {
            br /= 10;
            n++;
        }

    printf("Uneseni broj ima %d znamenki.", n);

    return 0;
}
