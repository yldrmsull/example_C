#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
//faktoriyel ve üs alma programý yapýcaz..
int sayi,i,j,x;
int us=us_bul(5,1);
int fak=fak_bul(4);
printf("us= %d",us);
printf("faktoriyel= %d ",fak);
}

int us_bul(int sayi,int kuvvet){
	int i,us;
	
		us=(sayi)^(kuvvet);
	
	
	return us;
}

int fak_bul(int sayibir){
	int j,fak;
	fak=1;
	for(j=1;j<=sayibir;j++){
	fak=fak*j;
	}
	return fak;
}
