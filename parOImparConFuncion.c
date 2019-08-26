#include<stdio.h>
void comprobar(int numero);

int main() {
	int numero;
	
	printf("Introduce un numero: ");
	scanf("%i", &numero);
	
	comprobar(numero);
	
	return 0;
}

void comprobar(int numero) {
	numero % 2 == 0 ? printf("Es par") : printf("Es impar");
}



