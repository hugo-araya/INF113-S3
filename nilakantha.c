#include <stdio.h>

int main(){
    int N, i, signo = -1;
    float termino, pi;
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &N); 
    i = 1;
    pi = 3;
    while (i < N){ 
		signo = (-1) * signo;
        termino = signo*(4.0/((2*i)*(2*i+1)*(2*i+2)));
        pi = pi + termino;
        i = i + 1;
    }
    printf("PI aproximado con %d terminos es : %f\n", N, pi);
    return 0;
}