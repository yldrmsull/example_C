#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vize[4];
	int sayac,ortalama;
	int toplam;
	for(sayac=0;sayac<4;sayac++)
	{
		printf("notlari giriniz\n");
		scanf("%d",&vize[sayac]);
	toplam+=vize[sayac];
		
	}
	ortalama=toplam/4;
	FILE*dosya;
	dosya=fopen("sonuc.txt","w");
	fprintf(dosya,"\ndizi elemanlari\n");
	for(sayac=0;sayac<4;sayac++){
		fprintf(dosya,"%d\n",vize[sayac]);
	}
	fprintf(dosya,"\n\n vize ortalamasi : %d",ortalama);


	
	
	
	
	
	
	
	
getch();
}
