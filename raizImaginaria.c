#include<stdio.h>
#include<math.h>

int main() {
	float numero, raiz;
	
	printf("Introduce un numero: ");
	scanf("%f", &numero);
	
	raiz = sqrt(numero);
	
	if (raiz < 0) {
		printf("El numero %.0f tiene raiz imaginaria", numero);
	} else {
		printf("El numero %.0f NO tiene raiz imaginaria", numero);
	}
	
	return 0;
}
