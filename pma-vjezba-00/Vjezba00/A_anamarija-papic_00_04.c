#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Unesi dva cijela broja:\n");
    scanf("%d %d", &a, &b);
    if (a < b)
        printf("%d\n", a);
    else
        printf("%d\n", b);
    return 0;
}
