#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,x;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10];
	
	for(i=0;i<10;i++){
		printf("%d,",a[i]);
		
	}
	printf("\n");
	for(j=0;j<10;j++){
		b[j]=a[j];
	}
	printf("\n");
	for(x=0;x<10;x++)
	{
		printf("%d,",b[x]);
	}
	getch();
}
