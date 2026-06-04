#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void limpiarPantalla();

int main(){
	int i, iteracion, signo = -1, e_16;
	double termino_l, termino_n, termino_b, pi_l, pi_n, pi_b, t1, t2, t3;
    limpiarPantalla();
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &iteracion);
	pi_l = 0;
    pi_n = 3;
    pi_b = 0;
	e_16 = 1;
    t1 = 2;
	t2 = 3;
	t3 = 4;
	i = 0;
    while (i < iteracion){
        signo = signo * (-1);      
        termino_l = 1/(2.0*i + 1);
		pi_l = pi_l + signo * termino_l;
        termino_n = 4.0/(t1 * t2 * t3);
		pi_n = pi_n + signo * termino_n;
        termino_b = (1.0/e_16)*((4.0/(8*i+1))-(2.0/(8*i+4))-(1.0/(8*i+5))-(1.0/(8*i+6)));
		pi_b = pi_b + termino_b;
		e_16 = e_16 * 16;
        i++;
        t1 = t1 + 2;
		t2 = t2 + 2;
		t3 = t3 + 2;
    }
    printf("LEIBNIZ\t\tPI aproximado con %d iteraciones es: %lf\n", iteracion, pi_l * 4);
    printf("NILAKANTHA\tPI aproximado con %d iteraciones es: %lf\n", iteracion, pi_n);
    if (isinf(pi_b)) {
        printf("BAILEY\t\tEl cálculo resultó en infinito.\n");
    }
    else{
	    printf("Bailey\t\tPI aproximado con %d iteraciones es: %lf\n", iteracion, pi_b);
    }
    
    return 0;
}

void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}