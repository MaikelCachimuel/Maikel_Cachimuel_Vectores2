#include <stdio.h>

int main() {
    int tamanovector;        
    int cachimuel[100];      

 
    printf("Ingrese el tamaño del vector cachimuel, el maximo debe ser 100: ");
    scanf("%d", &tamanovector);

    
    if (tamanovector > 100 || tamanovector <= 0) {
        printf("error el tamaño debe estar entre 1 y 100.\n");
        return 1;
    }

  
    printf("Ingrese los %d elementos del vector:\n", tamanovector);
    for (int i = 0; i < tamanovector; i++) {
        printf("cachimuel[%d] = ", i);
        scanf("%d", &cachimuel[i]);
    }

   
    printf("los elementos del vector cachimuel son:\n");
    for (int i = 0; i < tamanovector; i++) {
        printf("cachimuel[%d] = %d\n", i, cachimuel[i]);
    }

    return 0;
}