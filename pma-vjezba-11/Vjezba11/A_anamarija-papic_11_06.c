#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VEL 8

typedef struct
{
    char ime[30];
    char prezime[30];
    int ocjena;
} Ucenik;

Ucenik* unesi_niz(FILE* fp, int* d)
{
    int i;
    Ucenik* uc = (Ucenik*)malloc(VEL * sizeof(Ucenik));
    if(!uc)
        return NULL;
    while(fscanf(fp, "%s %s %d\n", uc[i].ime, uc[i].prezime, &uc[i].ocjena) != EOF)
        i++;
    *d = i;
    return uc;
}

void ispisi_niz(Ucenik* uc, int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%s %s %d\n", uc[i].ime, uc[i].prezime, uc[i].ocjena);
}

int sortiraj_niz_uzlazno(const void* p, const void* q)
{
    Ucenik* uc1 = (Ucenik*)p;
    Ucenik* uc2 = (Ucenik*)q;
    return uc1->ocjena - uc2->ocjena;
}

int sortiraj_niz_silazno(const void* p, const void* q)
{
    Ucenik* uc1 = (Ucenik*)p;
    Ucenik* uc2 = (Ucenik*)q;
    if(uc1->ocjena - uc2->ocjena < 0)
        return 1;
    if(uc1->ocjena - uc2->ocjena > 0)
        return -1;
    return 0;
}

int main(void)
{
    int d;
    FILE* fp = fopen("datoteka6.txt", "r");
    Ucenik* uc = unesi_niz(fp, &d);
    fclose(fp);

    printf("Sortirano uzlazno:\n");
    qsort(uc, d, sizeof(Ucenik), sortiraj_niz_uzlazno);
    ispisi_niz(uc, d);

    printf("\nSortirano silazno:\n");
    qsort(uc, d, sizeof(Ucenik), sortiraj_niz_silazno);
    ispisi_niz(uc, d);

    free(uc);
    return 0;
}

