#include <stdio.h>
#include <stdlib.h>  


void funcion_cachimuel(int cachimuel[], int tamanovector) {
    int i;
    
    for (i = 0; i < tamanovector; i++) {
        cachimuel[i] = rand() % 100;
    }

    
    printf("\nVector cachimuel:\n");
    for (i = 0; i < tamanovector; i++) {
        printf("cachimuel[%d] = %d\n", i, cachimuel[i]);
    }
}

int main() {
    int tamanovector;
    int cachimuel[100];

    printf("Ingrese el tamano del vector cachimuel, este debe ser 100 como maximo: ");
    scanf("%d", &tamanovector);

    if (tamanovector > 100 || tamanovector <= 0) {
        printf("Error: el tamano debe estar entre 1 y 100.\n");
        return 1;
    }

    funcion_cachimuel(cachimuel, tamanovector);
    return 0;
}