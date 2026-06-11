#include <stdio.h>

void mostrarArreglo( int[],int);
void llenaArreglo( int[],int);

int main(){
    // Como se declaracion del arreglo
    int numeros[7];
    llenaArreglo(numeros, 7);
    mostrarArreglo(numeros, 7);
    return 0;
}

void mostrarArreglo( int numeros[],int tam){
    int i;
    for (i = 0; i < tam; i++){
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }
}

void llenaArreglo( int numeros[],int tam){
    int i, numero;
    for (i = 0; i < 7; i++){
        printf("Indique un numero: ");
        scanf("%d", &numero);
        numeros[i] = numero;
    }
}