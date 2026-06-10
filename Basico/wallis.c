#include <stdio.h>

int main(){
    int N, i;
    float termino, prod;
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &N); 
    i = 1;
    prod = 1;
    while (i <= N){ 
        termino = (2.0*i/(2*i - 1))*(2.0*i/(2*i + 1));
        prod = prod * termino;
        i = i + 1;
    }
    printf("PI aproximado con %d terminos es : %f\n", N, 2*prod);
    return 0;
}