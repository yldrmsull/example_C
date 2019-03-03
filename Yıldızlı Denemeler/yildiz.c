#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int i,j,x,yildiz;
printf("bir sayi giriniz\n");
scanf("%d",&x);
yildiz=0;
for(i=1;i<=x/2;i++)
{
 	for(j=1;j<=x;j++){
 	yildiz++;	
	  printf("*",yildiz);
	  printf("\n");
	 }
	 

	
}


















	
	

	
	return 0;
}
