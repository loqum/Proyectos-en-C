#include<stdio.h>

int main() {
	
	int contador, suma = 0, multiplicacion = 0, numero;
	
	printf("Introduce un numero: ");
	scanf("%i", &numero);
	
	if (numero > 10) {
		
		contador = 1;
		
		while (contador <= numero) {
			contador *= contador;
			contador++;
		}
	} else {
		
		while (contador <= numero) {
			suma += contador;
			contador++;
		}
	}
	
	printf("Suma: %i", suma);
	printf("\nMultiplicacion: %i", contador);
	
	return 0;
}
