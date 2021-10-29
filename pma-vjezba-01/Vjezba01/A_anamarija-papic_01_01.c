#include <stdio.h>

int main(void)
{
    int br1, br2;
    char zn;

    printf("Unesite prvi broj: ");
    scanf("%d", &br1);
    printf("Unesite drugi broj: ");
    scanf("%d", &br2);
    printf("Unesite znak: ");
    scanf(" %c", &zn);

    if (zn == '+')
        printf("%d", br1 + br2);
    else if (zn == '-')
        printf("%d", br1 - br2);
    else if (zn == '*')
        printf("%d", br1 * br2);
    else if (zn == '/')
    {
        if (br2 == 0)
            printf("Zabranjeno je dijeliti s nulom!!!");
        else
        {
            if (br1 % br2 != 0)
                printf("%d i ostatak %d", br1 / br2, br1 % br2);
            else
                printf("%d", br1 / br2);
        }
    }
    else
        printf("Unesen nepodrzan znak!");

    return 0;
}
