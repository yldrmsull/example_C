#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int i;
	char sifre[50]; 
	int key=5; 
	char sfr;
	char *sifrele(char c[])
	{
		for(i=0;c[i]!=NULL;i++)
	{
	 c[i]=c[i]+key;
	 
	  } 
	  return c; 
}

main ()
{ 

printf("Kelimeyi giriniz : "); 
gets(sifre);
 char *sfr=sifrele(sifre);
 
  printf("\n Sifreli deger %s",sfr);
  
  
  
  
   getch();
    }

