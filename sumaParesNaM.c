#include<stdio.h>

int main() {
	int n, m, contador = n, suma = 0;
	
	printf("Introduce un inicio y un final: ");
	scanf("%i %i", &n, &m);
	
	while(contador <= m) {
		if (contador % 2 == 0) {
			suma += contador;
		}
		contador++;
	}
	
	printf("Total: %i", suma);
	
	
	return 0;
}
