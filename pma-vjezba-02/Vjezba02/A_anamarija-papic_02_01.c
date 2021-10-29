#include <stdio.h>

int main(void)
{
     char ime, prezime;
     char prvaIme, prvaPrezime, zadnjaIme, zadnjaPrezime;

     printf("Unesite inicijal imena: ");
     scanf(" %c", &ime);
     printf("Unesite inicijal prezimena: ");
     scanf(" %c", &prezime);

     prvaIme = ime;
     prvaPrezime = prezime;
     zadnjaIme = ime;
     zadnjaPrezime = prezime;

     while (1)
     {
         printf("Unesite inicijal imena: ");
         scanf(" %c", &ime);
         if (ime == '0')
            break;
         printf("Unesite inicijal prezimena: ");
         scanf(" %c", &prezime);

         /*pronalazak prve osobe*/
         if (prezime < prvaPrezime)
         {
            prvaPrezime = prezime;
            prvaIme = ime;
         }
         else if (prezime == prvaPrezime) /*osobe istog prezimena*/
         {
             if (ime < prvaIme)
                prvaIme = ime;
         }

         /*pronalazak zadnje osobe*/
         if (prezime > zadnjaPrezime)
         {
             zadnjaPrezime = prezime;
             zadnjaIme = ime;
         }
         else if (prezime == zadnjaPrezime) /*osobe istog prezimena*/
         {
             if (ime > zadnjaIme)
                zadnjaIme = ime;
         }
    }

    printf("Prva osoba: %c%c\nZadnja osoba: %c%c", prvaIme, prvaPrezime, zadnjaIme, zadnjaPrezime);

     return 0;
}
