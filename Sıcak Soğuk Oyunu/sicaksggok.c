#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int rw=80;
	int yakinlik=50;
	int bulamadi=1;
	int tahmin;
	while(bulamadi)
	{
		printf("sayi");
		scanf("%d",&tahmin);
		if(abs(tahmin-rw)<yakinlik)
		{
			printf("sicak\n");
			yakinlik=abs(tahmin-rw);
		}
		else if(abs(tahmin-rw)<yakinlik){
			printf("soguk\n"); }
			if(abs(tahmin-rw)==0) 
			{
				bulamadi=0;
				printf("buldunuz");
			}
		
	}
	system("PAUSE");
	return 0;
}
