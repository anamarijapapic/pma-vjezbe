#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* vratiString(FILE *fp)
{
    char ch, *str;
    int n, i = 0;
    fseek(fp, 0, SEEK_END);
    n = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    str = (char*)malloc(n * (sizeof(char)) + 1);
    if(!str) return NULL;

    while((ch = fgetc(fp)) != EOF)
    {
        if(islower(ch))
        {
            *(str + i) = ch;
            ++i;
        }
    }
    *(str + i) = '\0';

    return str;
}

int main(void)
{
    FILE* fp;
    char* low;

    fp = fopen("datoteka2.txt", "r");
    if(!fp)
        return 1;

    low = vratiString(fp);
    if(low == NULL)
        return 1;

    puts(low);

    fclose(fp);
    free(low);
    return 0;
}
