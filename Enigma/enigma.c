#include <stdio.h>
#include <string.h>
#include <conio.h>
//SIFRELEMEMIZ BUYUK HARF OLARAK YAPILACAK.
int x,y,ANAHTAR1,ANAHTAR2;
//HARFLERIMIZI ICEREN ROTOR DIZILERIMIZI OLUSTURUYORUZ.
char ROTOR1[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char ROTOR2[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char SFVERI[250],SF,SFR[250];

//SIFRELEME ISLEMIMIZ 2 ROTOR UZERINDEN UYGULANACAK.
//ROTOR'UN KAYDIRMA ICIN ANAHTAR DEGERIMIZI TANIMLIYORUZ.
//ROTORK ISIMLI GLOBAL BIR DEGISKENIMIZDE HER ROTORUN BASLANGIC HARFI ANAHTAR DEGERDEKI 
//HARF OLACAK SEKILDE KAYDIRILMASINI SAGLIYORUZ.
void ROTORK(int ANAHTAR,int ROTOR){
 char ART;
 if(ROTOR==1){
  for(x=0;x<ANAHTAR-1;x++){
   ART=ROTOR1[0];
   for(y=0;y<25;y++)
   ROTOR1[y]=ROTOR1[y+1];
   ROTOR1[25]=ART;
  }  
}
  else if(ROTOR==2){
   for(x=0;x<ANAHTAR-1;x++){
   ART=ROTOR2[0];
   for(y=0;y<25;y++)
   ROTOR2[y]=ROTOR2[y+1];
   ROTOR2[25]=ART;
   }
 }
}

void SIFRELEME(char DEGER[]){
 for(x=0;x<strlen(DEGER);x++){
  for(y=0;y<26;y++){
   if(DEGER[x]==ROTOR1[y]){
    SFR[x]=ROTOR2[y];
    break;
  }
 }
} 
//SIFRELENMIS VERININ SONUC.TXT DOSYAMIZA YAZILMASINI SAGLIYORUZ    
 FILE *DOSYA; 
 DOSYA= fopen("SONUC.txt","w");
 fprintf(DOSYA,"%s",SFR);
 fclose(DOSYA);
}
//SIFRENIN KODLANACAGI TARIH ANAHTARLARININ KULLANICI TARAFINDAN GIRILMESINI SAGLIYORUZ.
 main(){
 printf("1.ROTOR ANAHTARINI GIRINIZ : ");
 scanf("%d",&ANAHTAR1);
 printf("2.ROTOR ANAHTARINI GIRINIZ : ");
 scanf("%d",&ANAHTAR2);
 printf("SIFRELENECEK VERIYI GIRINIZ : ");
 x=0;
  do{
   SF=getche();
   if(SF>='A'&&SF<='Z'){
   SFVERI[x]=SF;
   x++;
  }else{
   if(SF!=13)
   printf("\nLUTFEN ABCDEFGHIJKLMNOPQRSTUVWXYZ HARFLERINI KULLANINIZ.\n");
}
   }while(SF!=13&&x<250);
    SFVERI[x]=NULL;
    ROTORK(ANAHTAR1,1);
    ROTORK(ANAHTAR2,2);
    SIFRELEME(SFVERI);
}
