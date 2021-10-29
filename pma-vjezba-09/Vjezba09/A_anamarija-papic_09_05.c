#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char imePrezime[100];
    char jmbag[30];
    char grupa;
    unsigned rezultat;
} Student;

void unesiStudente(Student* s, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        getchar();
        printf("\nStudent #%d:\n", i + 1);
        puts("Ime i prezime:");
        gets(s[i].imePrezime);
        puts("JMBAG:");
        gets(s[i].jmbag);
        puts("Grupa:");
        scanf(" %c", &s[i].grupa);
        puts("Rezultat na kolokviju:");
        scanf("%u", &s[i].rezultat);
    }
}

Student* preko40(Student* svi, Student* pol, int *n)
{
    pol = (Student*)malloc(*n * sizeof(Student));
    int i, j;

    j = 0;
    for(i = 0; i < *n; i++)
        if(svi[i].rezultat > 40)
        {
            pol[j] = svi[i];
            j++;
        }
    *n = j;
    return pol;
}

void ispisiStudente(Student* s, int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("\n%d.) Ime i prezime: %s, JMBAG: %s, Grupa: %c, Rezultat: %u%%", i + 1, s[i].imePrezime, s[i].jmbag, s[i].grupa, s[i].rezultat);
}

int main(void)
{
    int n, i;
    Student svi[50];
    Student* pol;

    printf("Koliko studenata zelite unijeti: ");
    scanf("%d", &n);

    unesiStudente(svi, n);

    pol = preko40(svi, pol, &n);

    printf("\nKolokvij su polozili:");
    ispisiStudente(pol, n);

    free(pol);
    return 0;
}
