#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned minOd3(unsigned a, unsigned b, unsigned c)
{
    return a <= b ? (a <= c ? a : c) : (b <= c ? b : c);
}

char *spojiDvaDulja(char *str1, char *str2, char *str3)
{
    size_t d1 = strlen(str1);
    size_t d2 = strlen(str2);
    size_t d3 = strlen(str3);
    char *spojen;
    unsigned najm;

    spojen = (char*)malloc((d1 + d2 + d3 + 1) * sizeof(char));
    if(!spojen) return NULL;

    najm = minOd3(d1, d2, d3);
    if(najm == d1)
    {
        strcpy(spojen, str2);
        strcat(spojen, str3);
    }
    else if(najm == d2)
    {
        strcpy(spojen, str1);
        strcat(spojen, str3);
    }
    else
    {
        strcpy(spojen, str1);
        strcat(spojen, str2);
    }

    return spojen;
}

int main(void)
{
    char str1[20], str2[20], str3[20];
    char *str;

    printf("Unesite tri stringa:\n");
    gets(str1);
    gets(str2);
    gets(str3);

    str = spojiDvaDulja(str1, str2, str3);
    if(str == NULL)
        return 1;

    puts(str);
    free(str);

    return 0;
}
