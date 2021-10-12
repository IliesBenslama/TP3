// This directive deactivates Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <assert.h>

/******************************************/
/*   TPC2021 no 3  exo 4                  */
/*                                        */
/******************************************/


/// <summary>
/// Lecture de la valeur du bit en position pos dans l’entier n en partant de 0 pour le bit de poids fort.
/// renvoie vrai si 1, ou false si 0
/// </summary>
/// <param name="n">entier à évaluer</param>
/// <param name="pos">bit à tester</param>
/// <returns></returns>
bool readBit(int n, int pos) {
	bool state = false;
//
	return state;
}
/// <summary>
/// Modifie la valeur de l’entier n en positionnant à 1 le bit en position pos en partant de 0 pour le bit de poids fort.
/// </summary>
/// <param name="n">: entier à modifier</param>
/// <param name="pos">: bit à positionner à 1</param>
/// <returns></returns>
int writeBit(int* n, int pos) {
//
	return *n;
}

/// <summary>
/// Rotation d'une bitmap 32x32 dans le sens des aiguilles d'une montre
/// </summary>
/// <param name="tab">: un tableau de 32 entiers qui contient la bitmap</param>
void rotateClockWise90Static(int tab[32]) {

	// la taille du coté est toujours égale à 32 bits
	// Lors de la rotation d’un quart de tour, on sait qu’un point qui se trouve maintenant en position
	// (x, y) se trouvait en position(y, c - 1 - x) dans le bitmap original.
	//	La valeur c étant la taille du côté de la bitmap, soit 32.

	// creation d'une bitmap temporaire de 32x32 bits
	int tmpBitMap[32] = { 0 };







	return;
}

void displayBitmap32(int tab[32]) {
	printf("\n");
	for (int y = 0; y < 32; y++)
	{




		printf("\n");
	}
}

int main() {
	setlocale(LC_ALL, "fr-FR");

	int tab[32] = {
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111,
	0b00001111000011110000111100001111

	};
	int n = 0x00000A0A;
	int ret = writeBit(&n, 0);
	
	// test le bon fonctionnement de writeBit()
	assert(n == 0x80000A0A);

	// affiche le bitmap avant
	displayBitmap32(tab);
	// rotation 90 degrés
	rotateClockWise90Static(tab);
	// affiche le bitmap après
	displayBitmap32(tab);
	

	return(EXIT_SUCCESS);
}