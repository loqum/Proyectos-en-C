#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() {
	char *cad = "1234";
	char *cadFloat = "123.45";
	
	int valor;
	float valorFloat;
	
	valor = atoi(cad);
	valorFloat = atof(cadFloat);
	
	printf("Numero entero: %i", valor);
	printf("\n\nNumero flotante: %.2f", valorFloat);
	
	return 0;
}
