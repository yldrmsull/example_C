#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() 
{ 
      static int i,a,boyut,j,uzunluk,b; 
      char cozulmusmetin[200],metin[200],matris[100][100],sifrelimetin[200]; 
      printf("Sifrelenecek metni giriniz :"); gets(metin); 
      while(metin[i]) 
      { 
              i++; 
      } 
      uzunluk=i; 
      printf("Metnin uzunlugu : %d\n",i);        //www.pubtekno.com 
      while(boyut*boyut<i)  
      { 
              boyut++; 
      } 
      for(i=0;i<boyut;i++) 
      { 
          for(j=0;j<boyut;j++) 
          { 
               matris[i][j]=metin[a]; 
               a++; 
               printf("%c\t",matris[i][j]); 
          } 
          printf("\n"); 
      } 
      for(i=0;i<boyut;i++) 
      { 
           for(j=0;j<boyut;j++) 
           { 
               sifrelimetin[b]=matris[j][i]; 
               b++; 
           } 
      }   
      printf("\nSifreli Metin : "); 
      for(i=0;i<boyut*boyut;i++) 
      { 
           if(sifrelimetin[i]!='\0' && sifrelimetin[i]!=' ') 
           { 
                 printf("%c",sifrelimetin[i]);     // Pubtekno 
           } 
      } 
      a=0; b=0; 
      printf("\n"); 
      for(i=0;i<boyut;i++) 
      { 
            for(j=0;j<boyut;j++) 
            { 
                 matris[i][j]=sifrelimetin[a]; 
                 a++; 
                 printf("%c\t",matris[i][j]); 
            } 
            printf("\n"); 
      } 
      for(i=0;i<boyut;i++) 
      { 
           for(j=0;j<boyut;j++) 
           { 
                cozulmusmetin[b]=matris[j][i]; 
                b++; 
           } 
      } 
      printf("\nSifresi cozulmus metin : "); 
      for(i=0;i<boyut*boyut;i++) 
      { 
           if(cozulmusmetin[i]!='\0') 
           { 
                printf("%c",cozulmusmetin[i]); 
           } 
      } 
      return 0; 
}  
