#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z;
	
	printf("bir sayi giriniz\n");
	scanf("%d",&x);
	if(x>9)
	{
		y=1;
	}
	else
	{
		y=0;
	}
	do{
		x=(x-x%10)/10;
		y++;
		
		
		
		
	}
	
	while(x>9);
	printf("basamak sayisi %d dir.",y);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
