#include<stdio.h>

int main() {
	
	int numero = 40;
	float numeroFloat = 40.34;
	char nombre[30] = {"Jaime"};
	
	int *p_numero;
	float *p_numeroFloat;
	char *p_nombre;
	
	p_numero = &numero;
	p_numeroFloat = &numeroFloat;
	p_nombre = &nombre;	
	
	printf("%i", numero);
	printf("\n%i", *p_numero);
	
	printf("\n\n%p", &numero);
	printf("\n%p", p_numero);
	
	printf("\n%p", &numeroFloat);
	printf("\n%p", p_numeroFloat);
	
	printf("\n%p", &nombre);
	printf("\n%p", p_nombre);
	printf("\n%s", p_nombre);
	
	return 0;
}
