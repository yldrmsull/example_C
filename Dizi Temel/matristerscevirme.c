#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,x;
	int a[]={4,8,3,1,18,9,21,20,5,17};
	int temp;
	temp=0;
	x=10;
	
	for(i=0;i<x/2;i++){
		temp=a[i];
		a[i]=a[x-i-1];
		a[x-1-i]=temp;
	}
	
	for(i=0;i<x;i++)
	printf("%d,",a[i]);
	getch();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
