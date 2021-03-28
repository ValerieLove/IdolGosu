#ifndef IDOLGOSU_H
#define IDOLGOSU_H
#define NUMIDOLS 424
typedef struct Idol{
	char name[15];
	char group[20];
	char company[30];
	char era[30];
}Idol;


int commandParser(char*);
void randomMaleIdol();
void randomFemaleIdol();

#endif
