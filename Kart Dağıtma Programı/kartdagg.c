#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void kar(int[][13]);
void dagit(const int[][13],const char *[]);

int main(int argc, char *argv[]) {
	const char *takim[4]={"Kupa","Karo","Sinek","Maça"};
	const char *taraf[13]={"As","Ýki","üç","Dört","Beþ","Altý","Yedi","Sekiz","Dokuz","On","Vale","Kýz","Papaz"};
	int deste [4][13]={0};
	
	srand(time(0));
	
	kar(deste);
	dagit(deste,taraf,takim);
	
	return 0;
}
void kar(int wDeste[][13])
{
	int satir,sutun,kart;
	
	for(kart=1;kart<=52;kart++){
		do{
			satir=rand()%4;
			sutun=rand()%13;
			
		}
		while(wDeste[satir][sutun]!=0);
		wDeste[satir][sutun]=kart;
	}
}

void dagit(onst int wDeste[][13],const char *wTaraf[],const char *wTakim[])
{
	int kart,satir,sutun;
	
	for(kart=1;kart<=52;kart++)
	
	for(satir=0;satir<=3;satir++)
	
	for(sutun=0;sutun<=12;sutun++)
	
	if(wDeste[satir][sutun]==kart)
	printf("%5sof%-8s%c",wTakim[satir],wTaraf[sutun],kart%2==00?'\n':'\t');
}
