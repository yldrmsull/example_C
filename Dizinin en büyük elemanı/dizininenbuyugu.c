#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dizi[20]={1,20,22,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int bosluk,x;
	int enbuyuk=0;
	
	for(x=0;x<20;x++)
	{
		if(enbuyuk<=dizi[x])
		{
			enbuyuk=dizi[x];
		}
		
		
	
	}	

	
	printf("en buyuk= %d ",enbuyuk);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
