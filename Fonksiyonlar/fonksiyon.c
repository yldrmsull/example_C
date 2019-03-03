#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int f,s,a[10];
	for(s=0;s<10;s++){
		printf("bir sayi giriniz\n");
			scanf("%d",&f);
			a[s]=f;
	}
	
	
	int max=maksimum_bul(a,10);
	int min=minimum_bul(a,10);
	printf("en buyuk deger : %d \n",max);
	printf("en kucuk deger : %d",min);
		return 0;
}

int maksimum_bul(int dizi[],int eleman_sayisi){
	int i,max;
	max=dizi[0];
	for(i=1;i<eleman_sayisi;i++){
		if(max<dizi[i])
		max=dizi[i];
	}
	return max;
}
int minimum_bul(int dizi[],int eleman_sayisi){
	int i,min;
	min=dizi[0];
	for(i=1;i<eleman_sayisi;i++){
		if(min>dizi[i]){
			min=dizi[i];
		}
	}
	return min;
}

