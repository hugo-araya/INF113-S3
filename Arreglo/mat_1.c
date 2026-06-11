#include <stdio.h>

int main(){
    // Declaracion de las matrices
    int mat[6][7];
    int i, j;
    for(i = 0; i < 6; i++){
        for(j = 0; j < 7; j++){
            printf("%d\n", mat[i][j]);
        }
    }
    return 0;
}