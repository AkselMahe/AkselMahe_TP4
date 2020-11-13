#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char phrase[1024] = { 0 }, carac, carac1;
	int i = 0;
	float nbreMot = 0, nbreDeCaracteres = 0, moyenneMot = 0, nbreDEspace = 0;

	//la phrase est mise dans le tableau
	printf("entrer une phrase au clavier : ");
	gets_s(phrase, 1024);


	do 
	{
		carac = phrase[i], carac1 = phrase[i + 1];
		if (carac != ' ' && (carac1 == ' ' || carac1 == '\0')) { 
			nbreMot++; // nouveau mot 
		}
		else if (carac == ' ') { 
			nbreDEspace++; // incrémentation du nombre d'espace
		}
		i++; 
	} while (carac != '\0');

	nbreDeCaracteres = strlen(phrase) - nbreDEspace; 
	moyenneMot = nbreDeCaracteres / nbreMot; //moyenne de la longueur des mots (espaces non compris)

	printf("phrase : %s\n", phrase);
	printf("nombre de mots : %.0f", nbreMot);
	printf("\nnombre de caracteres (espaces non pris en compte): %.0f", nbreDeCaracteres);
	printf("\nla longueur moyenne des mots : %.2f\n", moyenneMot);
}