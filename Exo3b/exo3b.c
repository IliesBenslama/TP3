// This directive deactivates Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
/******************************************/
/*   TPC2021 no 3  exo 3-d-e-f-g-h        */
/*                                        */
/******************************************/


#define NBNOTESMAX 30

// implémentation avec un tableau

int main() {
	setlocale(LC_ALL, "fr-FR");

	float val = 0;
	int nbNotes = 0;    // notes valides
	int nbNotesSaisie = 0; // on compte aussi les absents
	float total = 0;		 // somme des notes valides
	int arretSaisie = 0; // flag
	int nbAbsences = 0;
	float noteMax = 0;
	float noteMin = 20;
	double moyenne = 0;
	//3 - d
	


	// 3-e
	
	// 

	do {
		printf("\nEntrez la note no %d: ", nbNotesSaisie + 1);


	} while ((nbNotes != NBNOTESMAX) && (arretSaisie == 0));

	if (nbNotes != 0) {
		moyenne = (float)total / (float)nbNotes;
		printf("\nLa moyenne de ces %d notes est : %.2f\n", nbNotes, moyenne);
		printf("\nIl y a %d absences.", nbAbsences);
		printf("\nLa plus petite note est %.2f, la plus grande est %.2f", noteMin, noteMax);

		// 3-f affichage de l'écart-type 
		double ecartType = 0;
		double sommeEcart = 0;
		

		// 3 - g : affichage du tableau de notes :

		printf("\n\tNo note\tValeur note");

		
		printf("\n");

		//h - affichage du classement
		int index[NBNOTESMAX];
		float copyNotes[NBNOTESMAX];



	printf("\nBye !\n");

	return(EXIT_SUCCESS);
}