#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "IdolGosuHeaderFile.h"

int commandParser(char* command){
	if(strcmp(command,"$b\n")){
		randomMaleIdol();
		return 1;
	}
	else if(strcmp(command,"$g\n")){
		randomFemaleIdol();
		return 1;
	}
	else if(strcmp(command,"$e\n")){
		int randNumber = rand() % NUMIDOLS;
		if(randNumber % 2 == 0){
			randomFemaleIdol();
		}
		else{
			randomMaleIdol();
		}
		return 1;
	}
	else{
		printf("Feature coming soon\n");
	}
	
	//if no valid command entered
	return 0;
	
}

void randomMaleIdol(Idol arrayIdols[], int size){
	int randNumber = rand() % NUMIDOLS;
	Idol currentIdol = arrayIdols[randNumber];

	printf("%s %s %s %s", currentIdol.name, currentIdol.group, currentIdol.company, currentIdol.era);

	randNumber = rand() % 4;

	switch(randNumber){
		case 0:
			printf("C\n");
			break;
		case 1:
			printf("B\n");
			break;
		case 2:
			printf("A\n");
			break;
		case 3:
			printf("S\n");
			break;

		default:
			printf("Not a valid number\n");
			break;
	}


	
}
void randomFemaleIdol(Idol arrayIdols[], int size){
	int randNumber = rand() % NUMIDOLS;
	Idol currentIdol = arrayIdols[randNumber];

	printf("%s %s %s %s", currentIdol.name, currentIdol.group, currentIdol.company, currentIdol.era);

	randNumber = rand() % 4;

	switch(randNumber){
		case 0:
			printf("C\n");
			break;
		case 1:
			printf("B\n");
			break;
		case 2:
			printf("A\n");
			break;
		case 3:
			printf("S\n");
			break;

		default:
			printf("Not a valid number\n");
			break;
	}

}
