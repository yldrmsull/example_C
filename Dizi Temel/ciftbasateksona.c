#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[]={4,8,3,1,18,9,21,20,5,17};
	int b[10];
	int i,j,size,k;
	size=10;
	j=(-1);
k=size;

for(i=0;i<size;i++){
		if(a[i]%2==0){
		j=j+1;
		b[j];a[i];
	}
	else{
		k=k-1;
		b[k]=a[i];
	}
}
	
	for(i=0;i<size;i++)
		printf("%d,",b[i]);

	getch();












	return 0;
}
