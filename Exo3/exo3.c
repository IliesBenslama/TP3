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
#include <stdbool.h>


/******************************************/
/*   TPC2021 no 3  exo 3-abc              */
/*                                        */
/******************************************/

#define NBNOTESMAX 30


int main() {
	setlocale(LC_ALL, "fr-FR");

	float val = 0;		// note lue au clavier
	int nbNotes = 0;    // nombre de notes valides
	int nbNotesSaisie=0; // nombre de notes saisies, on compte aussi les absents
	float total = 0;		 // somme des notes valides
	bool arretSaisie = false; // flag
	int nbAbsences = 0;
	float noteMax = 0;
	float noteMin = 20;
	// 3-a-b-c
	// version sans tableau
	do {
		printf("\nEntrez la note no %d: ", nbNotesSaisie + 1);
//

	} while ((nbNotes != NBNOTESMAX) && (arretSaisie == false));

	if (nbNotes != 0) {
		printf("\nLa moyenne de ces %d notes est : %.2f\n", nbNotes, (float)total / (float)nbNotes);
		printf("\nIl y a %d absences.", nbAbsences);
		printf("\nLa plus petite note est %.2f, la plus grande est %.2f", noteMin, noteMax);
	}
	else printf("\nVous n'avez pas saisi de note\n");


	printf("\nBye !\n");
	return(EXIT_SUCCESS);
}