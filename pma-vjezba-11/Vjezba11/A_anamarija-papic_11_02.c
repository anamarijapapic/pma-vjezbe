#include <stdio.h>

//suma djeljivih s m u rangu do n
/*
int sumaDjeljivih(int n, int m)
{
    if(n == 0)
        return 0;
    if(n % m == 0)
        return n + sumaDjeljivih(n - 1, m);
    sumaDjeljivih(n - 1, m);
}
*/

//suma prvih n brojeva koji su djeljivi s m
int sumaPrvihDj(int n, int m, int a)
{
    if(n > a)
        return 0;
    if(n % m == 0)
        return n + sumaPrvihDj(n + 1, m, a);
    sumaPrvihDj(n + 1, m, a);
}

int main(void)
{
    int n, m;
    printf("Unesite n: ");
    scanf("%d", &n);
    printf("Unesite m: ");
    scanf("%d", &m);
    //printf("%d", sumaDjeljivih(n, m));
    printf("%d", sumaPrvihDj(n, m, n * m));
    return 0;
}
