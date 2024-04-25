#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char palabra[100];
    puts("Ingrese una palabra ... ");
    scanf("%s", palabra);
    int longitud = strlen(palabra);
    bool esPalindromo = true;

    for (int i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - 1 - i]) {
            esPalindromo = false;
            break;
        }
    }

    if (esPalindromo) {
        printf("%s es una palabra palindroma.\n", palabra);
    } else {
        printf("%s no es una palabra palindroma.\n", palabra);
    }

    puts("FIN DEL PROGRAMA");
    return 0;
}
