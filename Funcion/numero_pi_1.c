#include <stdio.h>
#include <stdlib.h>

float leibniz(int);
float nila(int);
float wallis(int);
void limpiaPantalla();
void calcula_PI();

int main(){
    calcula_PI();
    return 0;
}

float leibniz(int iteracion){
    int i = 0, potencia = -1;;
    float pi_4 = 0, termino;
    while (i < iteracion){ 
		potencia = (-1) * potencia;
        termino = potencia/(2.0*i +1);
        pi_4 = pi_4 + termino;
        i = i + 1;
    }
    return pi_4 * 4;
}

float nila(int iteracion){
    int i = 1, signo = -1;
    float pi = 3, termino;
    while (i < iteracion){ 
		signo = (-1) * signo;
        termino = signo*(4.0/((2*i)*(2*i+1)*(2*i+2)));
        pi = pi + termino;
        i = i + 1;
    }
    return pi;
}

void limpiaPantalla(){
    // Detecta si es Windows
    #ifdef _WIN32
        system("cls");
    // Detecta si es Linux o macOS (Unix)
    #else
        system("clear");
    #endif
}

void calcula_PI(){
    int N;
    limpiaPantalla();
    printf("Ingrese la cantidad de iteraciones: ");
    scanf("%d", &N); 
    printf("LEIBNIZ\t\tPI aproximado con %d iteraciones es : %f\n", N, leibniz(N));
    printf("NILAKANTHA\tPI aproximado con %d iteraciones es : %f\n", N, nila(N));
}