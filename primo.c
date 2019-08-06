#include<stdio.h>

int main() {
	int i, numero, contador = 0;
	
	printf("Introduce un numero: ");
	scanf("%i", &numero);
	
	for(i = 1; i <= numero; i++) {
		if (numero % i == 0) {
			contador++;
		}
	}
	
	if (contador > 2) {
		printf("\nNo es primo");
	} else {
		printf("\nEs primo");
	}
	
	return 0;
}
