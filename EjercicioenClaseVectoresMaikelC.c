#include <stdio.h>
#include <stdlib.h>  

int main() {
    int tamanovector;
    int cachimuel[100];
    int i;

    printf("Ingrese el tamano del vector cachimuel el tamaño maximo es 100: ");
    scanf("%d", &tamanovector);

    if (tamanovector > 100 || tamanovector <= 0) {
        printf("Error: el tamano debe estar entre 1 y 100.\n");
        return 1;
    }

    for (i = 0; i < tamanovector; i++) {
        cachimuel[i] = rand() % 100;   
    }

    printf("\nVector cachimuel :\n");
    for (i = 0; i < tamanovector; i++) {
        printf("cachimuel[%d] = %d\n", i, cachimuel[i]);
    }

    return 0;
}