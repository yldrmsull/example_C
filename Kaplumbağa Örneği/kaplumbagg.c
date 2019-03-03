#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tarla[10][10];
	int satir,sutun,x;
	char tusbas;
	
	
	for(;;){
		printf("hamle\n");
		scanf("%c",tusbas);
		system("CLS");
		if(tusbas=='w'||tusbas=='s'){
			for(satir=0;satir<10;satir++){
			if(tusbas=='w'){
			tarla[satir+1][10];
			printf("*");
		}
			else if(tusbas=='s'){
				tarla[satir-1][10];
				printf("*");
			}
			else
			return 18;
		}
		}
		else if(tusbas=='d'||tusbas=='a'){
			for(satir=0;satir<10;satir++){
				if(tusbas=='d'){
					tarla[10][satir+1];
					printf("*");
				}
				else if(tusbas=='a'){
					tarla[10][satir-1];
					printf("*");
				}
				else 
				return 18;
			}
			
		}
		
	}
	
	
	return 0;
}
