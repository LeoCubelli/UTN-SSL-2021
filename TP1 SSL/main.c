#include <stdio.h>
#include "scanner.h"

int main(void) {
    const int TAMANIO = 50;
    char token;
    char buffer[TAMANIO];
  
    token = get_token(buffer);

    while (token != FDT) {
        if (token == CADENA) {
            printf("Cadena: ");
        }
        else if (token == SEPARADOR) {
            printf("Separador: ");
        }
        printf("%s\n", buffer);

        limpiar_buffer(buffer,TAMANIO);
        token = get_token(buffer);
    }

    printf("Fin de texto: \n");
}