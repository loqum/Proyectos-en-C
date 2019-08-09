#include<stdio.h>
#define PI 3.1416

int main() {
	float longitud, radio; 

	printf("Introduce el radio de la circunferencia: ");
	scanf("%f", &radio);
	
	longitud = 2 * radio * PI;
	
	printf("La longitud de la circunferencia es: %.2f", longitud);
		
	return 0;
}
