#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	char isimler[3][40];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		printf("isim ve soyad giriniz\n");
		gets(isimler[i]);
		
	}
	printf("\nSinif Listesi\n"); for(i=0;i<3;i++){        
	 printf("[%d]: %s\n",i+1,isimler[i]); 
	 FILE*dosya;
	 fprintf("[%d]: %s\n",i+1,isimler[i],"w");
}
getch();
}
