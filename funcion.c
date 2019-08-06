#include<stdio.h>
void saludo();

int main() {
	int a, b;
	
	printf("Introduce dos numeros: ");
	scanf("%i %i", &a, &b);
	
	printf("%i", suma(a, b));
	
	saludo();
	
	return 0;
}


void saludo() {
	/*scanf("%s", &mensaje);
	printf("%s", mensaje);*/
	printf("\n\nSaludos");
}

int suma(int a, int b) {
	return a + b;
}
