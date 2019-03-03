#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,yildiz,bosluk,x;
	
	printf("bir sayi giriniz\n");
	scanf("%d",&x);
	bosluk=x-2;
	
	for(i=0;i<x;i++){
		for(j=0;j<bosluk;j++)
		printf(" \n");
		bosluk--;
		
	for(j=0;j<x;j++)
	printf("*");
	yildiz+=2;	
	}
	
	
	return 0;
}
