#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tarla[10][10];
	int satir,sutun;
	int i,j,x;
	int puan;
	puan=0;
	srand(time(NULL));
	//may�nlar� d���yoruz..
	for(i=0;i<10;i++)
	{
		satir=rand()%10;
		sutun=rand()%10;
		if(tarla[satir][sutun]!=1)
		tarla[satir][sutun]=1;
		else
		i--;
	}
	//may�nlar� d��edik..
	//�imdi do-while d�ng�s�yle oyuncudan koor. al�caz..
	for(i=0;i<10;i++){
		for(j=0;j<10;j++)
		{
			
				printf("0");
			
		}
		printf("\n");
	}
	do{
	
		printf("satir sayisini giriniz\n");
		scanf("%d",&satir);
		printf("sutun sayisini giriniz\n");
		scanf("%d",&sutun);
		//ald���m�z koor.da may�n olup olmad���na bak�caz..
		if(tarla[satir][sutun]!=1){
			puan++;
		printf("aferin pnp puanin %d \n",puan);
		}
		
			}
	while(tarla[satir][sutun]!=1);
	printf("mayina bastin pnp puanin %d \n",puan);
	getch();
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 1;
}
