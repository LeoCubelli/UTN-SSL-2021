#include <stdio.h>
#include <ctype.h>
#include "scanner.h"

enum tipo_token get_token(char *buffer) {
    int i = 0;
    int cadena = 0;
    char caracter = getchar();

    while (caracter != EOF) {
        if(caracter == ',') {
            buffer[i] = caracter;
            return SEPARADOR;
        }

        if(isspace(caracter)) {
            caracter = getchar();
        }

        if (es_cadena(caracter)==1) {
            while (es_cadena(caracter)) {
                buffer[i] = caracter;
                i++;
                caracter = getchar();
            }
            ungetc(caracter, stdin);
            buffer[i++] = '\0';
            return CADENA;
        }

    }
    return FDT;
}

int es_cadena(char caracter) {
    if (!isspace(caracter) && caracter != ',' && caracter != EOF) {
		return 1;
	} else {
        return 0;
    }
}

void limpiar_buffer(char *buffer, int tamanio) {
    for (int i = 0; i <= tamanio; i++) {
        buffer[i] = '\0';
    }
}