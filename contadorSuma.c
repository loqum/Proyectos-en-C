#include<stdio.h>

int main() {
	int numero, contador, suma = 0;
	
	printf("Introduce el total de numeros a sumar: ");
	scanf("%i", &numero);
	
	contador = 1;
	
	while (contador <= numero) {
		suma += contador;
		contador++;
	}
	
	printf("Total: %i", suma);
	
	return 0;
}
