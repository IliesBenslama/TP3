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
/*   TPC2021 no 3  exo 2                  */
/*                                        */
/******************************************/


int main() {
	setlocale(LC_ALL, "fr-FR");

	unsigned int val = 0xAAFF0000;

	



	printf("\nBye !\n");
	return(EXIT_SUCCESS);
}