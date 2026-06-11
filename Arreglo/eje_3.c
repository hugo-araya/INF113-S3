#include <stdio.h>

int main(){
    // Como se declaracion del arreglo
    int numeros[7] = {2, 3, 4, 5, 6, 7, 8};
    int indice;
    for (indice = 0; indice < 7; indice++){
        printf("numeros[%d] = %d\n", indice, numeros[indice]);
    }
    return 0;
}