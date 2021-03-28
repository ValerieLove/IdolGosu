#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include "IdolGosuHeaderFile.h"

int main(){
	
	FILE* FileIn = fopen("IdolGosuInput.txt","r");
	srand(0);
	Idol arrayIdols[NUMIDOLS];
	int numberOfRolls;
	int stars;
	int numMaxRolls;
	char command[4];
	char buffer[80];
	char wishlist[10][30];
	char badges[4][30];
	int i = 0;

	while(fgets(buffer, 80, FileIn)!= NULL){
		sscanf(buffer, "%s %s %s %s", arrayIdols[i].name, arrayIdols[i].group, arrayIdols[i].company, arrayIdols[i].era);
		i++;
	}
	
	
	while(strcmp(command, "$q\n") != 0){
		printf("----------------------------------Welcome to IdolGosu!----------------------------------\n");
		printf("IdolGosu! is a card collection game where you can collect various Kpop idols from different eras from all sorts of groups. Enter a command to get started.\n");
		printf("$b Random male idol.\n$g Random female idol.\n$e Random idol.\n$d Number of stars.\n$c Collection.\n$q Quit\n");
		
		while(numberOfRolls != numMaxRolls){
			if(commandParser(command) == 0){
				printf("Error: Invalid command. Try again\n");
			}
			
		}
	}
	
}
