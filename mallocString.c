#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char nombre[30];
	char *p_nombre;
	
	printf("Introduce un nombre: ");
	gets(nombre);
	
	p_nombre = malloc((strlen(nombre) + 1) * sizeof(char));
	
	strcpy(p_nombre, nombre);
	
	printf("Nombre: %s", p_nombre);
	
	return 0;
}
