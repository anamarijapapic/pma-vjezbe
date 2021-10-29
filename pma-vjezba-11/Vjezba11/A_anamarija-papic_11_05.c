#include <stdio.h>

int pojavljivanje(char *str, int n, char ch, int i, int cnt)
{
    if(str[i] == '\0') /*nul terminator -> kraj stringa*/
        return 0;
    else if(str[i] == ch)
        cnt++;
    if(cnt == n)
        return i;
    pojavljivanje(str, n, ch,  i + 1, cnt);
}
int main(void)
{
    char str[] = "anamarija";
    char ch = 'a';
    int n = 3;
    printf("U stringu '%s' znak '%c' %d. put se pojavljuje na indeksu %d", str, ch, n, pojavljivanje(str, n, ch, 0, 0));
}
