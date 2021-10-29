#include <stdio.h>

int kvadrat(char c)
{
    int x = c - '0'; /*konverzija iz char u int (ASCII trik)*/
    return x * x;
}

int check(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    else if (c >= 'A' && c <= 'Z')
        return 2;
    else if (c >= '0' && c <= '9')
        return 3;
    return 0;
}

int main(void)
{
    char znak = ' ';

    while (znak != '.')
    {
        printf("\nUnesite znak: ");
        scanf(" %c", &znak);

        switch(check(znak))
        {
        case 1:
            printf("malo");
            break;
        case 2:
            printf("veliko");
            break;
        case 3:
            printf("%d", kvadrat(znak));
            break;
        default:
            printf("ni slovo ni znamenka");
        }
    }
    return 0;
}
