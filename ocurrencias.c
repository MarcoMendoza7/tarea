#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    int ocurrencias[26] = {0};
    int i;

    puts("Ingrese una palabra ... ");
    scanf("%s", palabra);

    for (i = 0; i < strlen(palabra); i++) {
        char letra = palabra[i];
        if (letra >= 'a' && letra <= 'z') {
            ocurrencias[letra - 'a']++;
        } else if (letra >= 'A' && letra <= 'Z') {
            ocurrencias[letra - 'A']++;
        }
    }

    printf("Letra:   Ocurrencias:\n");
    for (int i = 0; i < 26; i++) {
        char letra = 'a' + i;
        if (ocurrencias[i] > 0) {
            printf("%c        %d\n", letra, ocurrencias[i]);
        }
    }
    
    puts("FIN DEL PROGRAMA");
    return 0;
}