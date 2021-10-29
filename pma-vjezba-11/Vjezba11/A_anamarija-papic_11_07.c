#include <stdio.h>

unsigned fibonacci()
{
    static int a = 0, b = 1, c;
    c = a + b;
    a = b;
    b = c;
    if(a == 1)
        return a;
    return c;
}

int main(void)
{
    printf("%u\n", fibonacci());
    printf("%u\n", fibonacci());
    printf("%u\n", fibonacci());
    printf("%u\n", fibonacci());
    printf("%u\n", fibonacci());
    printf("%u\n", fibonacci());
    printf("%u\n", fibonacci());
    return 0;
}

