#include <stdio.h>
#include <string.h>

/*int pozicija(char const *str, char ch)
{
    char *point = str;
    int cnt = 0;
    int poz = 0;

    while(*point)
    {
        if(*point == ch)
        {
            cnt++;
            poz = point - str + 1;
        }
        point++;
    }

    if(cnt == 0)
        poz = -1;

    return poz; //ne ponavlja se 2 puta
}*/

int pozicija(char const *str, char ch)
{
    char* poz;
    if(strchr(str, ch) != NULL) /*za slova koja se nalaze u stringu*/
    {
        poz = strchr(strchr(str, ch) + 1, ch);
        return poz ? poz - str + 1 : -1;
    }
    return -1; /*za slova koja se ne nalaze u stringu*/
}

int main(void)
{
    char str[] = "ONoffON";
    char ch;
    printf("Unesite slovo: ");
    scanf(" %c", &ch);

    printf("Pozicija drugog pojavljivanja slova %c je %d", ch, pozicija(str, ch));

    return 0;
}
