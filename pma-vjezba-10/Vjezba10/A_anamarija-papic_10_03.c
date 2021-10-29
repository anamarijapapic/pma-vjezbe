#include <stdio.h>
#include <ctype.h>

#define N 150

void izbaciZapisi(FILE *fp1, FILE *fp2, char* dat1, char* dat2)
{
    char red[N];
    //char ch;
    int i;

    fp1 = fopen(dat1, "r");
    fp2 = fopen(dat2, "w");
    if(!fp1 || !fp2)
        return;

    /*for(ch = fgetc(fp1); ch != EOF; ch = fgetc(fp1))
    {
        if(!(ispunct(ch)) && ch != ' ' && ch != '\n')
            fputc(ch, fp2);
    }*/

    while(!(feof(fp1)))
    {
        //fgets(red, N, fp1);
        fread(red, 1, N, fp1);
        for(i = 0; i < N; i++)
            if(!ispunct(red[i]) && red[i] != ' ' && red[i] != '\n')
                fputc(red[i], fp2);
    }

    fclose(fp1);
    fclose(fp2);
}

int main(void)
{
    FILE* fp1;
    FILE* fp2;

    char prva[50];
    char druga[50];

    printf("Ime 1. datoteke: ");
    gets(prva);
    printf("Ime 2. datoteke: ");
    gets(druga);

    izbaciZapisi(fp1, fp2, prva, druga);

    return 0;
}
