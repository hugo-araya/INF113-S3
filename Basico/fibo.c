#include <stdio.h>

int main(){
    int n, i = 0;
    int t1 = 0, t2 = 1, siguienteTermino;
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    // Aqui va el mientras 
    while (i <= n){
        siguienteTermino = t1 + t2;
        t1 = t2;
        t2 = siguienteTermino;
        i++;
    }
    printf("El Fibonacci de %d es %d\n", n, t2);
    return 0;
}