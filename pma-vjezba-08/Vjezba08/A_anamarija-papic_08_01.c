#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *sloziAbecedno(char *str)
{
    char *p, *slozen, ch;
    int cnt, plc = 0;

    size_t d = strlen(str);

    slozen = (char*)malloc(d + 1);
    if(!slozen) return NULL;

    p = str;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        for (cnt = 0; cnt < d; cnt++)
        {
            if (*p == ch)
            {
                *(slozen + plc) = *p; /*dodavanje slova u sortirani niz*/
                plc++;
            }
            p++;
        }
        p = str;
    }
    *(slozen + plc) = '\0'; /*dodavanje '\0' na kraj da bude string*/

    return slozen;
}

int anagram(char *str1, char *str2)
{
    char *sloz1, *sloz2;

    sloz1 = sloziAbecedno(str1);
    sloz2 = sloziAbecedno(str2);

    if (!strcmp(sloz1, sloz2))
        return 1;
    free(sloz1);
    free(sloz2);
    return 0;
}

int main(void)
{
    char rijec1[20], rijec2[20];
    printf("Unesite prvu rijec: ");
    gets(rijec1);
    printf("Unesite drugu rijec: ");
    gets(rijec2);

    if(anagram(rijec1, rijec2))
        printf("\nRijeci \"%s\" i \"%s\" su anagrami.", rijec1, rijec2);
    else
        printf("\nRijeci \"%s\" i \"%s\" nisu anagrami.", rijec1, rijec2);

    return 0;
}
