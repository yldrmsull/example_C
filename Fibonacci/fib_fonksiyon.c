#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,sayi,x;
	printf("bir sayi giriniz\n");
	scanf("%d",&x);
	
	
	int fibonacci=fib_bul(x);
		return 0;
}

int fib_bul(x){
	int i=0,j=1,sayi,y;
	
	for(sayi=0;sayi<x;sayi++){
		 printf("%d  ",i+j);
		y=i;
		i=j;
		j=y+j;
	}
	
	return fib_bul;
}
