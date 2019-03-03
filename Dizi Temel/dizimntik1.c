#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int	i,j,x;
int a[10]={1,2,3,4,5,6,7,8,9,10};
int b[10];
j=0;
for(x=0;x<10;x++){
	  a[x]=j;
	  
	  j=b[x];
	printf("%d,",b[x]);
}



















	return 0;
}
