#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char k[25],kr;
	int i;
	printf("cumle gir pnp");
	i=0;
	do{
		kr=getche();
		k[i]=kr;
		i++;
	}
	while(kr!='.'&& i<25);
	printf("\nGirdiginiz Cumle\n%s",k);
	
	
	
	
	
	getch();
}
