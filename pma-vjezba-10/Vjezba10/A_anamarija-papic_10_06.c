#include <stdio.h>
#define AVG4(a, b, c, d) (((a)+(b)+(c)+(d)) / 4)

unsigned maxRed(FILE *fp)
{
    unsigned a, b, c, d, red, i = 0;
    float prosjek, maxProsjek = 0;
    while(fscanf(fp, "%u %u %u %u", &a, &b, &c, &d) != EOF)
    {
        ++i; /*broj reda*/
        prosjek = AVG4(a, b, c, d);
        if(prosjek > maxProsjek)
        {
            maxProsjek = prosjek;
            red = i;
        }
    }
    return red;
}

int main(void)
{
    FILE* fp = fopen("datoteka6.txt", "r");
    if(!fp)
        return 1;
    printf("U %u. redu se nalaze brojevi s najvecim prosjekom", maxRed(fp));
    fclose(fp);
    return 0;
}
