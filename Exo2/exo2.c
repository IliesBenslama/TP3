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

unsigned int val =0xAAFF0000;
//a
int taille_octet= sizeof(val);
printf("\n %u ", taille_octet);
//b
int taille_bit = taille_octet * 8;
printf("\n %u \n", taille_bit);
//c et d
int i;
for (i = 0; i < taille_bit; i++)
{
int a= ((val >> i) & 1);
if (a == 0)
{
printf("\nbit %d: OFF", i);
}
if (a == 1)
{
printf("\nbit %d: ON", i);
}
}



printf("\nBye !\n");
return(EXIT_SUCCESS);
}
