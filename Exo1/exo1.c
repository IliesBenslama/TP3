// This directive deactivates Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/******************************************/
/*   TPC2021 no 3  exo 1                  */
/*                                        */
/******************************************/



#define carre(x) x * x

int main() {
	setlocale(LC_ALL, "fr-FR");

	//Déclarer une variable « nb » entière et égale à 5 et afficher la valeur de carre(Nb). 
	int nb = 5;
	
	
	//Afficher en suite le carre(nb + 1), quel est le résultat obtenu ? 
	

	//D’où vient le problème à votre avis ? 
	//Proposer une modification de la macro pour qu’elle fonctionne.

#ifdef carre
#undef carre
#define carre(x)	//compléter ici
#endif

	printf_s("\nla valeur du carré de %d est égale à %d", nb+1, carre(nb + 1));

	printf("\n");

	return(EXIT_SUCCESS);
}