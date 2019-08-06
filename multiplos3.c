#include<stdio.h>

int main() {
	int n, contador;
	
	printf("Introduce un numero: ");
	scanf("%i", &n);
	
	contador = 1;
	
	while (contador <= n) {
		contador % 3 == 0 ? printf("%i\n", contador) : printf("");
		contador++;
	}
	
	return 0;
}
