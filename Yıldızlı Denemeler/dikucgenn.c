#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,x;
	printf("bir sayi giriniz\n");
	scanf("%d",&x); 
  
  
  for(i=1;i<=x; i++){ 
     for(j=0;j<i; j++){ 
        printf("*"); 
     } 
     printf("\n"); 
  } 
	return 0;
}
