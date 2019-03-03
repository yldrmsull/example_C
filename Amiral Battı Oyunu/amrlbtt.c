//#include <vcl.h>
#include <stdio.h>
#include <conio.h>
#pragma hdrstop
 
//---------------------------------------------------------------------------
 
#pragma argsused
void tablo(char oyun[10][10],int puan)
{
printf("\n");
printf("  --a-- --b-- --c-- --d-- --e-- --f-- --g-- --h-- --i-- --j--\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 1  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyun[0][0],oyun[0][1],oyun[0][2],oyun[0][3],oyun[0][4],oyun[0][5],oyun[0][6],oyun[0][7],oyun[0][8],oyun[0][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 2  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyun[1][0],oyun[1][1],oyun[1][2],oyun[1][3],oyun[1][4],oyun[1][5],oyun[1][6],oyun[1][7],oyun[1][8],oyun[1][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 3  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyun[2][0],oyun[2][1],oyun[2][2],oyun[2][3],oyun[2][4],oyun[2][5],oyun[2][6],oyun[2][7],oyun[2][8],oyun[2][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 4  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyun[3][0],oyun[3][1],oyun[3][2],oyun[3][3],oyun[3][4],oyun[3][5],oyun[3][6],oyun[3][7],oyun[3][8],oyun[3][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 5  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyun[4][0],oyun[4][1],oyun[4][2],oyun[4][3],oyun[4][4],oyun[4][5],oyun[4][6],oyun[4][7],oyun[4][8],oyun[4][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 6  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyun[5][0],oyun[5][1],oyun[5][2],oyun[5][3],oyun[5][4],oyun[5][5],oyun[5][6],oyun[5][7],oyun[5][8],oyun[5][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 7  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyun[6][0],oyun[6][1],oyun[6][2],oyun[6][3],oyun[6][4],oyun[6][5],oyun[6][6],oyun[6][7],oyun[6][8],oyun[6][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 8  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyun[7][0],oyun[7][1],oyun[7][2],oyun[7][3],oyun[7][4],oyun[7][5],oyun[7][6],oyun[7][7],oyun[7][8],oyun[7][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 9  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyun[8][0],oyun[8][1],oyun[8][2],oyun[8][3],oyun[8][4],oyun[8][5],oyun[8][6],oyun[8][7],oyun[8][8],oyun[8][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf("10  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyun[9][0],oyun[9][1],oyun[9][2],oyun[9][3],oyun[9][4],oyun[9][5],oyun[9][6],oyun[9][7],oyun[9][8],oyun[9][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf("\nPuaniniz:%d\n",puan);
 
}
 
int main(int argc, char* argv[])
{
 
basla:
clrscr();
printf("\n      -- AMIRAL BATTI OYUNU --\n\n           ## KURALLAR ##\n\n");
printf("   1.Amiral Batti oyunu Gemi Savasi olarak da bilinir.\n");
printf("   2.Bu oyunun amaci, bilgisayarin yerlestirdigi gemilerin yerlerini\n");
printf("     dogru tahmin ederek bilgisayarin donanmasini batirarak zafere\n");
printf("     ulasmaktir.\n");
printf("   3.1 adet Savas Gemisi(4 kare alan kapsar.)\n");
printf("     1 adet Kruvazor    (3 kare alan kapsar.)\n");
printf("     1 adet Denizalti   (2 kare alan kapsar.)\n");
printf("     1 adet Mayin       (1 kare alan kapsar.)\n");
printf("     1 adet Muhrip      (2 kare alan kapsar.)\n");
printf("   4.Satir ve sutundaki degerlere gore koordinat degerleri girilir.\n");
printf("   5.Her karavana atisinizda mevcut puaninizdan 10 puan dusulur.\n");
printf("   6.Her isabetli atisinizda puaniniz ayni kalir.\n");
printf("   7.Isabetli atislariniz O ile gosterilir.\n");
printf("   8.Karavana atislariniz X ile gosterilir.\n");
printf("   9.Maximum puan:1000\n");
printf("  10.Mevcut puaniniz:1000\n");
printf("     BASARILAR...  Bahadir SARIKAN\n\n");
printf("Oyuna baslamak icin lutfen herhangi bir tusa basiniz...");
getche();
clrscr();
 
randomize();
char dizi[10][10];
char oyun[10][10];
char devam,q,satir[1],c;
int puan=1000,sayac=0;
 
int savas=0,kruvazor=0,denizalti=0,mayin=0,muhrip=0;
int y,gemicesidi,x=0,z,t;
int SavasGemi=1,KruvazorGemi=1,MayinGemi=1,DenizAltiGemi=1,MuhripGemi=1;
 
for( x=0;x<=9;x++)
{
  for( y=0;y<=9;y++)
  dizi[x][y]='\0';
}
 
for( z=0;z<=9;z++)
{
  for(t=0;t<=9;t++)
  oyun[z][t]='\0';
}
 
 
while(1)
{
gemicesidi=(rand()%5)+1;
y=rand()%10;
 
if(gemicesidi==1)
{
 if(savas<1)
 {
  if(y>6)
  {
   for(i=y;i>=(y-3);i--)
   dizi[x][i]='S';
   x+=2;
   savas++;
  }
  if(y<=6)
  {
   for(int i=y;i<=y+3;i++)
   dizi[x][i]='S';
   x+=2;
   savas++;
 
  }
 }
}
 
if(gemicesidi==2)
{
 if(kruvazor<1)
 {
  if(y>7)
  {
   for(int i=y;i>=y-2;i--)
   dizi[x][i]='K';
   x+=2;
   kruvazor++;
  }
  if(y<=7)
  {
   for(int i=y;i<=y+2;i++)
   dizi[x][i]='K';
   x+=2;
   kruvazor++;
 
  }
 }
}
 
 
if(gemicesidi==3)
{
 if(denizalti<1)
 {
  if(y>8)
  {
   for(int i=y;i>=y-1;i--)
   dizi[x][i]='D';
   x+=2;
   denizalti++;
  }
  if(y<=8)
  {
   for(int i=y;i<=y+1;i++)
   dizi[x][i]='D';
   x+=2;
   denizalti++;
 
  }
 }
}
 
 
if(gemicesidi==4)
{
 if(mayin<1)
 {
  dizi[x][y]='M';
  x+=2;
  mayin++;
 
 }
}
 
if(gemicesidi==5)
{
 if(muhrip<1)
 {
  if(y>8)
  {
   for(int i=y;i>=y-1;i--)
   dizi[x][i]='P';
   x+=2;
   muhrip++;
  }
  if(y<=8)
  {
   for(int i=y;i<=y+1;i++)
   dizi[x][i]='P';
   x+=2;
   muhrip++;
 
  }
 }
}
 
if((savas==1)&&(kruvazor==1)&&(denizalti==1)&&(mayin==1)&&(muhrip==1))break;
}
 
while(1)
{
 do{
    bos:
    clrscr();
    tablo(oyun,puan);
    printf("\n\n");
    printf("\nLutfen sutun harfini giriniz >>");
    scanf("%c",&q);
    c=q;
    t=q;
    if(t==10)goto bos;
    if((t<97)||(t>106))
    {
     printf("\nLutfen a ile j arasinda bir deger giriniz...\n");
     printf("Devam etmek icin lutfen bir tusa basiniz..\n");
     getche();
    }
    }while((t<97)||(t>106));
 do{
    bos2:
    clrscr();
    tablo(oyun,puan);
    printf("\n\n");
    printf("\nLutfen sutun harfini giriniz >>%c\n",c);
    printf("\nLutfen satir degerini giriniz >>");
    gets(satir);
    if(satir[0]==0)goto bos2;
    z=atoi(satir);
    if((z<=0)||(z>10))
    {
     printf("\nLutfen 1 ile 10 arasinda bir deger giriniz...\n");
     printf("Devam etmek icin lutfen bir tusa basiniz..\n");
     getche();
     clrscr();
     tablo(oyun,puan);
     printf("\n\n");
     printf("\nLutfen sutun harfini giriniz >>%c\n",q);
    }
    }while((z<=0)||(z>10));
 
 
if(dizi[z-1][t-97]=='K')
{
 oyun[z-1][t-97]='O';
 if(KruvazorGemi==3)
 {
  printf("\nKruvazor Gemisi Batti..\n");
  printf("Devam etmek icin bir tusa basiniz ..");
  getche();
 }
 if(KruvazorGemi<3)
 {
  printf("\nTebrikler! Bir gemi vurdunuz..\n");
  printf("Devam etmek icin bir tusa basiniz ..");
  getche();
 }
 KruvazorGemi++;
}
 else if(dizi[z-1][t-97]=='S')
        {
         oyun[z-1][t-97]='O';
         if(SavasGemi==4)
         {
          printf("\nSavas Gemisi Batti..\n");
          printf("Devam etmek icin bir tusa basiniz ..");
          getche();
         }
         if(SavasGemi<4)
         {
          printf("\nTebrikler! Bir gemi vurdunuz..\n");
          printf("Devam etmek icin bir tusa basiniz ..");
          getche();
         }
         SavasGemi++;
        }
        else if(dizi[z-1][t-97]=='M')
               {
                oyun[z-1][t-97]='O';
                printf("\nMayin Imha Edildi..\n");
                printf("Devam etmek icin bir tusa basiniz ..");
                getche();
               }
               else if(dizi[z-1][t-97]=='D')
                      {
                       oyun[z-1][t-97]='O';
                       if(DenizAltiGemi==2)
                       {
                        printf("\nDeniz Alti Batti..\n");
                        printf("Devam etmek icin bir tusa basiniz ..");
                        getche();
 
                       }
                       if(DenizAltiGemi<2)
                       {
                        printf("\nTebrikler! Bir gemi vurdunuz..\n");
                        printf("Devam etmek icin bir tusa basiniz ..");
                        getche();
                       }
                       DenizAltiGemi++;
                      }
                      else if(dizi[z-1][t-97]=='P')
                             {
                             oyun[z-1][t-97]='O';
                             if(MuhripGemi==2)
                             {
                              printf("\nMuhrip Gemisi Batti..\n");
                              printf("Devam etmek icin bir tusa basiniz ..");
                              getche();
 
                             }
                             if(MuhripGemi<2)
                             {
                              printf("\nTebrikler! Bir gemi vurdunuz..\n");
                              printf("Devam etmek icin bir tusa basiniz ..");
                              getche();
                             }
                             MuhripGemi++;
                             }
 
 
else
{
 oyun[z-1][t-97]='X';
 puan=puan-10;
 printf("\nUzgunum Karavana..\n");
 printf("Devam etmek icin bir tusa basiniz ..");
 getche();
}
sayac++;
if((sayac==100)||(KruvazorGemi+SavasGemi+MayinGemi+DenizAltiGemi+MuhripGemi==16))break;
}
clrscr();
printf("\n\n");
printf("            AMIRAL BATTI\n\n");
printf("    Tebrikler! Oyunu Basari ile Bitirdiniz..\n");
for(int i=0;i<=puan;i++)
{
 printf("\r    Puaniniz:%d",i);
 for(int j=0;j<=1000000;j++){
 }
}
printf("\n\n    Oyunu Tekrar Oynamak ister misiniz (e/h) >>");
scanf("%s",&devam);
if((devam=='E')||(devam=='e'))goto basla;
if((devam=='H')||(devam=='h'))goto son;
getche();
    return 0;
    son:
}
