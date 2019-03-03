#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

#define Temizle system("cls")

/* 2o karakter   5 karakter ters */

int sayac=1;

void AraBulYaz(char[],char[],int);
void TersCevir(char[]);  // Gönderilen karakter dizisini ters cevirir
int main()
{
    char cumle[20];
    char aranan[5];
    int i,uz_cumle,uz_aranan;


    printf("\tEn fazla 20 karakterli cumle giriniz: ");
    gets(cumle);
    printf("\n\tEn Fazla 5 karakterli bir kelime giriniz: ");
    gets(aranan);

    uz_cumle = strlen(cumle);
    uz_aranan = strlen(aranan);

    TersCevir(aranan); // Aranacak kelime ters cevrildi

    Temizle;
    printf("\tGirilen cumle: %s\n",cumle);

    for(i=0;i<uz_cumle;i++)
        AraBulYaz(cumle,aranan,i);



    printf("\n\n\tArama Sona Erdi...");
    getch();
    return 0;
}

void AraBulYaz(char cumle[],char aranan[],int i)
{
    int j,k=0;
    for (j=i ; j<i+strlen(aranan) ; j++ )
    {
     if(cumle[j]!=aranan[k])
            return;
        k++;
    }

    printf("\n\t\"%s\" kelimesi %d. defa bu aralikta bulundu: [%d,%d]",aranan,sayac++,i,i+strlen(aranan)-1);
}

void TersCevir(char kelime[])
{
    char temp[5];
    int uzunluk,i;

    uzunluk=strlen(kelime);

    for(i=0;i<=uzunluk-1;i++)  //Kelimenin Tersini Temp'e aktarýr
        temp[i] = kelime[uzunluk-1-i];

    temp[uzunluk]='\0';

    for(i=0;i<=uzunluk-1;i++) //Kelimeyi Temp ile eþitler
        kelime[i]=temp[i];

    return;
}
