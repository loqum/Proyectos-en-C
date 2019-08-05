#include<stdio.h>

int main() {
	int n1, n2;
	
	printf("Introduce dos numeros: ");
	scanf("%i %i", &n1, &n2);
	
	if (n1 > n2) {
		printf("%i es mayor que %i", n1, n2);
	} else if (n2 > n1) {
		printf("%i es mayor que %i", n2, n1);
	} else {
		printf("Ambos numeros son iguales");
	}
	
	return 0;
}
