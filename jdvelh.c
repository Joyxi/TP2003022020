#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Choix = 0;
int numChap = 0;
int i=0;
int Decision = 0;

struct Chapitre {
	char *description;
	int or;
	int pdv;
	int tabChap[11];
};

int tab[10] = {1,2,3,4,5,6,7,8,9,10};

typedef struct Chapitre chapitre;

int main(){
	
	chapitre chapitre1 = {"Chapitre1",10,100,{2,3,4,5,6,7,8,9,10}};
	chapitre chapitre2 = {"Chapitre2",8,75,{1,3,4,5,6,7,8,9,10}};
	chapitre chapitre3 = {"Chapitre3",9,62,{1,2,4,5,6,7,8,9,10}};
	chapitre chapitre4 = {"Chapitre4",4,65,{1,2,3,5,6,7,8,9,10}};
	chapitre chapitre5 = {"Chapitre5",6,12,{1,2,3,4,6,7,8,9,10}};
	chapitre chapitre6 = {"Chapitre6",2,60,{1,2,3,4,5,7,8,9,10}};
	chapitre chapitre7 = {"Chapitre7",9,21,{1,2,3,4,5,6,8,9,10}};
	chapitre chapitre8 = {"Chapitre8",5,47,{1,2,3,4,5,6,7,9,10}};
	chapitre chapitre9 = {"Chapitre9",3,45,{1,2,3,4,5,6,7,8,10}};
	chapitre chapitre10 = {"Chapitre10",10,25,{1,2,3,4,5,6,7,8,9}};
	
	
	printf("Vous etes au %s \n",chapitre1);
	
	printf("Bonjour voyageur. Ou souhaitez-vous aller ?\n");
	printf("1-Miami; 2-Toronto;\n");
	scanf("%d",&Choix);
	
	if(Choix==1){
		printf("Vous etes arrives a destination de Miami.\n");
		printf("Vous etes au %s,vous avez %d or,votre niveau de vie: %d \n",chapitre2);
	}
	if(Choix==2){
		printf("Vous etes arrives a destination de Toronto.\n");
		printf("Vous etes au %s \n",chapitre3);
	}
	
	//tab[Choix];
	
	for (i=0;i<10;i++){
		numChap = Choix;
		printf("Avancer dans l'histoire (choix 1) ou retour (choix 2) \n");
		scanf("%d",&Decision);
		if(Decision==1){
			printf("Ou souhaitez-vous aller ?\n");
			scanf("%d",&Choix);
			printf("Vous etes au chapitre %d \n",Choix);
			printf("Chapitre precedemment visite: %d \n",numChap);
		}
		if (Decision==2){
			printf("A quel chapitre revenir ?\n");
			scanf("%d",&Choix);
			if(Choix>numChap){
				printf("Retour impossible, vous n'avez pas encore visite ce lieu. Veuillez entrer un numero de chapitre correct. \n");
				scanf("%d",&Choix);
			}
			else{
				printf("Vous etes au chapitre %d \n",Choix);
				printf("Chapitre precedemment visite: %d \n",numChap);
			}
		}
		//printf("Vous etes arrives a destination de Miami.\n");
	};
	
	return 0;
};

