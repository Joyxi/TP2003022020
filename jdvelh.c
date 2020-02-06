#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Choix = 0;

int main(){
	printf("Bonjour voyageur. Ou souhaitez-vous aller ?\n");
	printf("1-Miami; 2-Toronto;\n");
	scanf("%d",&Choix);
	
	if(Choix==1){
		printf("Vous etes arrives a destination de Miami.\n");
	}
	if(Choix==2){
		printf("Vous etes arrives a destination de Toronto.\n");
	}
};