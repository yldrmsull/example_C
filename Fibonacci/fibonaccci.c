#include<stdio.h>

        int main()

        {

         int x=0,y=1,sayi,i,degisken;

         printf("kac hane istiyorsunuz?");

         scanf("%d",&sayi);



         printf("%d  ",x);

         printf("%d  ",y);

         for(i=0;i<sayi-2;++i)

         {

            printf("%d  ",x+y);

             degisken=x;

             x=y;

            y=degisken+y;



         }



         getchar();getchar();

         return 0;

        }
