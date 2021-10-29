#include <stdio.h>

void ispisi(FILE *fp)
{
    int n, i;
    char rijec[50];
    while (fscanf(fp, "%d %s", &n, rijec) != EOF)
    {
        for(i = 0; i < n; i++)
            printf("%s", rijec);
        printf("\n");
    }
}

int main(void)
{
    FILE* fp = fopen("datoteka4.txt", "r");
    if(!fp)
        return 1;
    ispisi(fp);
    fclose(fp);
    return 0;
}
