#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100];
    char palabra2[100];

    puts("Ingrese la primera palabra ...");
    scanf("%s", palabra1);

    puts("Ingrese la segunda palabra ...");
    scanf("%s", palabra2);

    int comparacion = strcmp(palabra1, palabra2);

    if (comparacion == 0){
        printf("%d\n", comparacion);
    }else if (comparacion < 0){
        printf("%d\n", comparacion);
    }else{
        printf("%d\n", comparacion);
    }
    puts("FIN DEL PROGRAMA");
    return 0;
}