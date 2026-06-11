#include <stdio.h>

int main(){
    // Declaracion de las matrices
    int mat[6][7];
    int i, j, numero = 0;
    for(i = 0; i < 6; i++){
        for(j = 0; j < 7; j++){
            mat[i][j] = numero;
            numero++;
        }
    }

    for(i = 0; i < 6; i++){
        for(j = 0; j < 7; j++){
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}