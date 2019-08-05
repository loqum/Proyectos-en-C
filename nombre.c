#include<stdio.h>

int main() {
	char nombre[30], sexo[2];
	int edad;
	
	printf("Introduce tu nombre: ");
	gets(nombre);
	
	printf("Introduce tu sexo [H] o [M]: ");
	gets(sexo);
	
	printf("Introduce tu edad: ");
	scanf("%i", &edad);
	
	if (strcmp(sexo, "H") == 0 && edad > 18) {
		printf("Tu nombre es: %s", nombre);
	} else {
		printf("No puedo decir tu nombre.");
	}
	
	return 0;
}
