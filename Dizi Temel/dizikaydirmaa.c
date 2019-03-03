#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[]={4,8,3,1,18,19,21,20,5,17};
	int b[10];
	int i,size,n;
	size=10;
	printf("dizide kaydirmak istediginiz degeri giriniz: ");
	scanf("%d",&n);
	
	for(i=0;i<size;i++)
		printf("%d,",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
		b[i]=a[i];
		for(i=n;i<size;i++)
		a[i-n]=a[i];
	for(i=0;i<n;i++)
		a[size-n+i]=b[i];
		for(i=0;i<size;i++)
		printf("%d,",a[i]);
		getch();
	
	return 0;
}
