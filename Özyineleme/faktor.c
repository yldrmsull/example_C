#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long faktoriyel(long);
int main(int argc, char *argv[]) {
	int i;
	for(i=1;i<=10;i++)
	printf("%2d=%1d\n",i,faktoriyel(i));
	return 0;
}

long faktoriyel(long sayi)
{
	if(sayi<=1)
	return 1;
	else
	return(sayi*faktoriyel(sayi-1));
}
