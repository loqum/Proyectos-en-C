#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char *p_cadena, *p_cadena_completa;
	
	p_cadena = malloc(10 * sizeof(char));
	
	strcpy(p_cadena, "Ruben ");
	
	printf("Nombre: %s", p_cadena);
		
	p_cadena_completa = realloc(p_cadena, 30 * sizeof(char));
	
	strcat(p_cadena_completa, "Fernandez Moreno");
	
	printf("\nNombre completo: %s ", p_cadena);
	
	return 0;
}
