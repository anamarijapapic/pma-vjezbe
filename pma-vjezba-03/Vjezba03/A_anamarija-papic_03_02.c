#include <stdio.h>

int racunaj(int br)
{
    int suma = 0;
    while (br != 0)
    {
        suma = suma + (br % 10);
        br /= 10;
        if (br == 0)
        {
            if (suma > 9)
            {
                br = suma; /*sad ce zapravo suma ici kroz while*/
                suma = 0; /*reset sume*/
            }
        }
    }
    return suma;
}

int main(void)
{
    int n;
    int rezultat;

    printf("Unesite broj: ");
    scanf("%d", &n);

    rezultat = racunaj(n);
    printf("\nRezultat zbrajanja znamenki do kraja: %d", rezultat);
}
