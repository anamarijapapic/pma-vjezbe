#include <stdio.h>

int velicina(FILE *fp)
{
    int n;

    fp = fopen("datoteka1.txt", "r");
    if(!fp)
        return 1;

    fseek(fp, 0, SEEK_END);
    n = ftell(fp);

    fclose(fp);
    return n;
}

int main(void)
{
    FILE *fp;
    printf("%d", velicina(fp));
    return 0;
}
