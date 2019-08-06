#include<stdio.h>

int main() {
	int numero;
	
	printf("Introduce un numero: ");
	scanf("%i", &numero);
	
	numero % 2 == 0 ? printf("Es par") : printf("Es impar");
	
	return 0;
}
