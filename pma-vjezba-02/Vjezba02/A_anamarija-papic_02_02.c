#include <stdio.h>

int main(void)
{
    short br;
    int n;

    printf("Koliko brojeva zelite unijeti: ");
    scanf("%d", &n);

    do
    {
        printf("Unesite broj: ");
        scanf("%d", &br);

        if (br < 0)
        {
            br = ':';
        }
        else if (br < 'A' || br > 'Z')
        {
            br = 'A' + br%('Z' - 'A' + 1); /*ovako osiguravamo da ako ponovimo neki broj pri unosu, za njega svaki put dobivamo isto slovo iz raspona*/
        }
        printf("%c\n", br);

        n--;
    } while(n != 0);

    return 0;

}
