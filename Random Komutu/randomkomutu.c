#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0,i,sayi;
	double oran=0;
	double atis_sayisi=1000;
	for(i=0;i<atis_sayisi;i++){
		sayi=1+rand()%2;
	
	if(sayi==1){
		a=a+1;
	}
	
	}
	printf("%d",a);
	oran=((a/atis_sayisi)*100);
	printf("\n");
	printf("%f",oran);
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
