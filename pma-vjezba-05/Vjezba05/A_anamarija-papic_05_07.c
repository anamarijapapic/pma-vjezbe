#include <stdio.h>

int main(void)
{
    int brvj, brst;
    int i, j;
    int polvj, brpolvj;
    int student;
    int sve, brsve = 0;
    int rjvj, nerjvj;

    printf("Unesite broj vjezbi: ");
    scanf("%d", &brvj);
    printf("Unesite broj studenata: ");
    scanf("%d", &brst);

    sve = (1 << brvj) - 1; /*generiranje maske za sve vjezbe polozene*/

    for(i = 0; i < brst; i++)
    {
        student = 0;
        printf("\n%d. student: ", i + 1);
        printf("\nBroj polozenih vjezbi: ");
        scanf("%d", &polvj);

        if(polvj == 0) /*student nije polozio ni jednu vjezbu*/
            student = ~sve;
        else if(polvj == brvj) /*student polozio sve vjezbe*/
        {
            student = sve;
            brsve++;
        }
        else
        {
            for(j = polvj; j > 0; j--)
            {
                printf("Broj koji oznacava polozenu vjezbu: ");
                scanf("%d", &brpolvj);
                student |= 1 << (brpolvj - 1); /*postavljanje bitova koji po poziciji odgovaraju broju polozene vjezbe*/
            }
        }

        /*stvaranje broja koji ce oznacavati vjezbe koje su svi studenti polozili*/
        if(i == 0)
            rjvj = student;
        else
            rjvj &= student;

        /*stvaranje broja koji se oznacavati vjezbe koje nijedan student nije polozio*/
        if(i == 0)
            nerjvj = ~student;
        else
            nerjvj &= ~student;
    }

    printf("\na) %d studenata rijesilo je sve vjezbe.", brsve);

    printf("\nb) Vjezbe koje su rijesili svi studenti su:");
    /*prolazak po pozicijama po broju koji cuva rijesene vjezbe i ocitavanje o kojima se radi*/
    for(i = 0; i < brvj; i++)
    {
        if(rjvj & (1 << i))
            printf(" %d", i + 1);
    }

    printf("\nc) Vjezbe koje nije rijesio nijedan student su:");
    /*prolazak po pozicijama po broju koji cuva nerijesene vjezbe i ocitavanje o kojima se radi*/
    for(i = 0; i < brvj; i++)
    {
        if(nerjvj & (1 << i))
            printf(" %d", i + 1);
    }

    return 0;
}
