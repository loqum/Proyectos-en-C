#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {	
	char nombre[20], *p_nombre;
	
	strcpy(nombre, "Ruben");
		
	p_nombre = malloc((strlen(nombre) + 1) * sizeof(char)); 
	
	p_nombre = malloc(sizeof(int)); 
	
	strcpy(p_nombre, nombre);
	
	printf("Nombre: %s", p_nombre);

	return 0;
}
