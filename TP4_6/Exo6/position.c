#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLETABLEAU 100

void main() {
	// first va v�rifier si la valeur a ete trouv�e au moins une fois
	// trouve surveille le cas o� la variable a ete trouv�e
	int a = 0, tableau[TAILLETABLEAU] = { 0 }, nbre, min = 0, max = 20, i, trouve = 1, *curseur = &tableau[0], valeurRecherchee, first = 1;

	printf("entrer la valeur recherchee : ");
	scanf_s("%d", &valeurRecherchee);

	//initialisation de la fonction
	srand(time(NULL));
	//remplissage du tableau de 1 � 20
	for (i = 0; i < TAILLETABLEAU; i++) {
		nbre = (rand() % (max - min + 1)) + min;
		tableau[i] = nbre;
	}
	//on cherche la valeur
	for (curseur, i = 0; i < TAILLETABLEAU; curseur++, i++) {
		if (*curseur == valeurRecherchee && first) { // premiere fois qu'on trouve la valeur
			printf("\n\nLa valeur %d a ete trouvee en %d", valeurRecherchee, i);
			first = 0;
			trouve = 0;
		}
		else if (*curseur == valeurRecherchee) { // si la valeur a d�j� �t� trouv�e
			printf(", puis en %d", i);
		}
	}
	if (trouve) { // si non trouv�e
		printf("\n\nLa valeur %d n'a pas ete trouvee", valeurRecherchee);
	}
	printf(".\n");
}