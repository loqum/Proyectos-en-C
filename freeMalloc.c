#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char nombre[20], *p_nombre;
	
	strcpy(nombre, "Ruben");
	
	p_nombre = malloc((strlen(nombre) + 1) * sizeof(char));
	
	strcpy(p_nombre, nombre);
	
	printf("%s", p_nombre);
	
	free(p_nombre);
	
	printf("\n%s", p_nombre);
	
	return 0;
}
