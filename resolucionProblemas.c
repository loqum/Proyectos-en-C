#include<stdio.h>

int main() {
	
	int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	printf("Introduce los 2 numeros: ");
	scanf("%i %i", &n1, &n2);
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	printf("La suma es: %i \n", suma);
	printf("La resta es: %i \n", resta);
	printf("La multiplicacion es: %i \n", multiplicacion);
	printf("La division es: %i \n", division);
	
	return 0;
}
