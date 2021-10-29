#include <stdio.h>

int main(void)
{
    int a, b, tmp;
    printf("Unesite varijablu a:\n");
    scanf("%d", &a);
    printf("Unesite varijablu b:\n");
    scanf("%d", &b);

    tmp = a;
    a = b;
    b = tmp;

    printf("Zamjena izvrsena.\na = %d\tb = %d", a, b);
    return 0;
}
