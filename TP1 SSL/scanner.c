#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "scanner.h"

void get_token(void) {
	int cadena = 0;
	char caracter;
	caracter = getchar();

	while (caracter != EOF) {
		if(caracter == ',') {
			printf("Separador: ,\n");
			caracter = getchar();
		} 
		if(isspace(caracter)) {
			caracter = getchar();
		}
		if (!isspace(caracter) && caracter != ',' && caracter != EOF) {
			printf("Cadena: ");
		}

		while (!isspace(caracter) && caracter != ',' && caracter != EOF) {
			cadena=1;
			printf("%c", caracter);
			caracter = getchar();
		}
		if (cadena == 1 ) {
			printf("\n");
			cadena=0;
		}	
	}
	printf("Fin De Texto: \n");
}
