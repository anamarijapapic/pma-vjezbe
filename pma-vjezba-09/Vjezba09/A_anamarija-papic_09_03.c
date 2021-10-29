#include <stdio.h>

typedef struct {int br; int naz;} razlomak;

void skrati(razlomak *r)
{
    int n, i;
    if(r->br > r->naz)
        n = r->naz;
    else
        n = r->br;

    for(i = n; i > 1; i--)
        if(r->br % i  == 0 && r->naz % i == 0)
        {
            r->br /= i;
            r->naz /= i;
            break;
        }
}

void plus(razlomak r1, razlomak r2, razlomak* rez)
{
    rez->naz = r1.naz * r2.naz;
    rez->br = r1.br * r2.naz + r2.br * r1.naz;
    skrati(rez);
}

void minus(razlomak r1, razlomak r2, razlomak* rez)
{
    rez->naz = r1.naz * r2.naz;
    rez->br = r1.br * r2.naz - r2.br * r1.naz;
    skrati(rez);
}

void puta(razlomak r1, razlomak r2, razlomak* rez)
{
    rez->naz = r1.naz * r2.naz;
    rez->br = r1.br * r2.br;
    skrati(rez);
}

void dijelj(razlomak r1, razlomak r2, razlomak* rez)
{
    rez->naz = r1.naz * r2.br;
    rez->br = r1.br * r2.naz;
    skrati(rez);
}

int main(void)
{
    char razl[20];
    char op;
    razlomak r1;
    razlomak r2;
    razlomak rez;

    printf("Unesite 1. razlomak u formatu NUM/NUM:\n");
    gets(razl);
    sscanf(razl, "%d/%d", &r1.br, &r1.naz);
    printf("Unesite 2. razlomak u formatu NUM/NUM:\n");
    gets(razl);
    sscanf(razl, "%d/%d", &r2.br, &r2.naz);
    printf("Unesite zeljenu racunsku operaciju (+, -, *, /):\n");
    scanf(" %c", &op);

    if(r1.naz == 0 || r2.naz == 0 || op == '/' && r2.br == 0)
    {
        printf("\nNeispravno! Zabranjeno dijeliti s 0!\n");
        return 1;
    }

    switch(op)
    {
    case '+':
        plus(r1, r2, &rez);
        break;
    case '-':
        minus(r1, r2, &rez);
        break;
    case '*':
        puta(r1, r2, &rez);
        break;
    case '/':
        dijelj(r1, r2, &rez);
        break;
    default:
        printf("\nNeispravan operator!\n");
        return 1;
        break;
    }

    printf("%d/%d %c %d/%d = %d/%d", r1.br, r1.naz, op, r2.br, r2.naz, rez.br, rez.naz);

    return 0;
}
