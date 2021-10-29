#include <stdio.h>
#define KUB(x) (x)*(x)*(x)

int trimorfan(int br)
{
    int err = 0;
    int kub;
    kub = KUB(br);

    while (br != 0)
    {
        if (kub % 10 != br % 10)
        {
            err++; /*znamenke se ne poklapaju, znaci nece biti trimorfan*/
        }
        kub /= 10;
        br /= 10;
    }
    if (err == 0)
        return 1; /*broj je trimorfan*/
    return 0; /*broj nije trimorfan*/
}

int main(void)
{
    int n = 1;

    while (n)
    {
        printf("\nUnesite broj: ");
        scanf("%d", &n);

        if (n == 0)
            break;

        printf("%d^3 = %d", n, KUB(n));

        if (trimorfan(n))
            printf("\nBroj je trimorfan!");
        else
            printf("\nBroj nije trimorfan!");
    }

    return 0;
}
