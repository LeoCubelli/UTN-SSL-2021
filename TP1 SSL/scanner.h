enum tipo_token {
    CADENA,
    SEPARADOR,
    FDT
};

enum tipo_token get_token(char *buffer);
void limpiar_buffer(char *buffer, int tamanio);
int es_cadena(char caracter);