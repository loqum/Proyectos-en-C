#include<stdio.h>

int main() {
	
	int numero;
	
	printf("Introduce un numero: ");
	scanf("%i", &numero);
	
	if (numero > 0) {
		printf("Positivo");
	} else {
		printf("Negativo");
	}
	
	return 0;
}
