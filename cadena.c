/***
@file Contar caracteres
***/

#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[20];
    int vocales = 0, consonantes = 0, digitos = 0;

    printf("Ingrese una cadena de texto (menos de 20 caracteres): ");
    scanf("%s", cadena);
    for (int i = 0; cadena[i] != '\0'; i++) {

/***
@tolower Covertir caracteres a minúscula para fascilitar la comparación
***/

        char caracter = tolower(cadena[i]);
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            vocales++;
        }
        else if ((caracter >= 'a' && caracter <= 'z') && !isdigit(caracter)) {
            consonantes++;
        }
  
/***
@param isdigit Verificar si el carácter es un dígito
***/

        else if (isdigit(caracter)) {
            digitos++;
        }
    }
    printf("Cantidad de vocales: %d\n", vocales);
    printf("Cantidad de consonantes: %d\n", consonantes);
    printf("Cantidad de dígitos: %d\n", digitos);

    return 0;
}

