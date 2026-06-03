#include <stdio.h>

int main(){
    int N, i, j, potencia = -1;
    float termino_l, termino_w, suma, prod;
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &N); 
    i = 0;
    suma = 0;
    prod = 1;
    while (i < N){ 
		potencia = (-1) * potencia;
        termino_l = potencia/(2.0*i +1);
        suma = suma + termino_l;
        termino_w = (2.0*(i+1)/(2*(i+1) - 1))*(2.0*(i+1)/(2*(i+1) + 1));
        prod = prod * termino_w;
        i = i + 1;
    }
    printf("Leibniz\tPI aproximado con %d terminos es : %f\n", N, 4*suma);
    printf("Wallis\tPI aproximado con %d terminos es : %f\n", N, 2*prod);
    printf("La diferencia es: %f\n", (4*suma)-(2*prod));
    return 0;
}