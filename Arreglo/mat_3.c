#include <stdio.h>
#define FILAS 3
#define COLUMNAS 3

int main(){
    // Declaracion de las matrices
    int mat[FILAS][COLUMNAS];
    int i, j, numero;
    for(i = 0; i < FILAS; i++){
        for(j = 0; j < COLUMNAS; j++){
            printf("Ingrese un numero: ");
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < FILAS; i++){
        for(j = 0; j < COLUMNAS; j++){
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}