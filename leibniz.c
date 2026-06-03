#include <stdio.h>

int main(){
    int N, i, j, potencia = -1;
    float termino, suma;
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &N); 
    i = 0;
    suma = 0;
    while (i < N){ 
		potencia = (-1) * potencia;
        termino = potencia/(2.0*i +1);
        suma = suma + termino;
        i = i + 1;
    }
    printf("PI aproximado con %d terminos es : %f\n", N, 4*suma);
    return 0;
}