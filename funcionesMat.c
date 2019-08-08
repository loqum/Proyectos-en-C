#include<stdio.h>
void funciones1n(float n);
void funciones2n(float n1, float n2);

int main() {
	float n, x, y;
	
	printf("Introduce un numero: ");
	scanf("%f", &n);
	
	funciones1n(n);	
	
	printf("\n\nIntroduce dos numeros: ");
	scanf("%f %f", &x, &y);
	
	funciones2n(x, y);
		
	
	return 0;
}

void funciones1n(float n) {
	
	printf("\nFuncion ceil (redondea al entero mayor mas cercano): %.2f", ceil(n));
	
	printf("\n\nFuncion fabs (devuelve el valor absoluto de n): %.2f", fabs(n));
	
	printf("\n\nFuncion floor (redondea al entero menor mas cercano): %.2f", floor(n));
	
	printf("\n\nFuncion sqrt (Devuelve la raiz cuadrada de n): %.2f", sqrt(n));
}

void funciones2n(float n1, float n2) {
	
	printf("\n\nFuncion fmod (calcula el resto de la division de x / y): %.2f", fmod(n1, n2));
	
	printf("\n\nFuncion pow (calcula x elevado a y): %.2f", pow(n1, n2));
}
