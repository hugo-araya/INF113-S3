#include <stdio.h>
#include <stdlib.h>

// Debo declarar las funciones que se utilizaran
float f(float);
void muestra(float);
float inicializa();
float g(float);
void limpiaPantalla();

int main(){
    float x, y;
    limpiaPantalla();
    x = inicializa();
    y = g(f(x));
    muestra(y);
    return 0;
}

// Implementacion (definicion) de la funcion

float f(float x1){
    float resultado;
    resultado = 2 * x1 + 1;
    return resultado;
}

void muestra(float res){
    printf("\n\n\n\tRESULTADOS\n\n");
    printf("El resultado de la funcion consultada es : %.2f\n", res);
    printf("\nEso es todo\n");
}

float inicializa(){
    float q;
    printf("Ingrese el valor a consultar: ");
    scanf("%f", &q);
    return q;
}

float g(float x1){
    float resultado;
    resultado = x1 * x1;
    return resultado;
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