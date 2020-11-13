#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> //toupper
#define TAILLEMOTMAX 20


void main() {
	char MOT1[TAILLEMOTMAX] = { 0 }, MOT2[TAILLEMOTMAX] = { 0 }, MOT1Majuscule[TAILLEMOTMAX] = { 0 }, lettre;
	int i = 0, tailleMot;

	//radar
	printf("--- Test d'un Palindrom ---");
	printf("\nentrer un mot : ");

	gets_s(MOT1, TAILLEMOTMAX); 
	tailleMot = strlen(MOT1);

	//on met mot1 en majuscule dans mot1Majuscule 
	while (MOT1[i] != '\0') {
		MOT1Majuscule[i] = toupper(MOT1[i]);
		i++;
	}
	i = 0;

	do { //alors lettre par lettre, mot2 devient l'inverse de mot1
		// la derniere lettre de mot1 devient la premiere lettre de mot2
		lettre = *(&MOT1Majuscule[tailleMot - 1 - i]); *(&MOT2[0 + i]) = lettre;
		i++;
	} while (i < tailleMot); //tant que i est inferieur a la taille de mot1

	// Si mot1 et mot2 sont identiques
	if (strcmp(MOT1Majuscule, MOT2) == 0) { // strcmp renvoit 0 si les chaines sont identiques
		printf("\n%s est un palindrome\n", MOT1); //mot1 est un palindrome
	}
	else {//sinon
		printf("\n%s n'est pas un palindrome\n", MOT1);//mot1 n'est pas un palindrome
	}
}

