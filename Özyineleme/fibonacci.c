#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long fibonacci(long);
int main(int argc, char *argv[]) {
	long sonuc,sayi;
	
	printf("bir tamsayi giriniz\n");
	scanf("%1d",&sayi);
	sonuc=fibonacci(sayi);
	printf("fibonacci(%1d)=%1d\n",sayi,sonuc);
	return 0;
}
long fibonacci(long n)
{
	if(n==0||n==1)
	return n;
	else
	return fibonacci(n-1)+fibonacci(n-2);
}

