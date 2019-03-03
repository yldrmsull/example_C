#include<stdio.h> 
#include<conio.h> 


char cumle[100];
 
 
 int i; 
 void buyukharf(char c[])
 { 
 
 
 char krB='A',krK='a';
 
 
 
  for(i=0;c[i]!=NULL;i++)
  {
   if(c[i]>=krK)
   
    c[i]=c[i]-(krK-krB);
	 }
	
	  printf("\n\n%s",c);
	   }
	  
	  
	    main()
		{ 
	
		printf("Bir cumle gir :");
			 gets(cumle);
	
		  buyukharf(cumle);
		  
		
		   getch();
		
		
		    }

