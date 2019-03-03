 #include<stdio.h>
 #include<conio.h>
  
  int uzunluk(char a[]){
   int i;
    for(i=0;i<=50;i++	)  {
if(a[i]==NULL){ return i; }
}
}
 main(){
  char cumle[50];
   printf("\nCumle Gir : ");
    gets(cumle);
	 printf("\n%d tane karakterden olusmaktadir.",uzunluk(cumle));
	  getch();
	   }


