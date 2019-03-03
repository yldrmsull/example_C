#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[3][40];
	int i,j,isim;
	FILE*Dosyayaz;
	Dosyayaz=fopen("yaz.txt","w");
	for(i=0;i<3;i++){
	printf("isim giriniz:\n",a[i][40]);
	gets(a);
			fprintf(Dosyayaz,"%s\n",a);
			
			
	}


	
	fclose(Dosyayaz);
	getch();
	return 0;
}
