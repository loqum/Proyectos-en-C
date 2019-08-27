#include<stdio.h>

struct persona {
	char nombre[50];
	int edad;
} persona, claudi = {"Claudi", 25};

int main() {
	
	printf("Introduce el nombre de la persona: ");
	gets(persona.nombre);
	
	printf("Introduce la edad de la persona: ");
	scanf("%i", &persona.edad);
	
	printf("La persona desconocida se llama %s y tiene %i", persona.nombre, persona.edad);
	
	
	printf("\n\nTiene %i anos y su nombre es %s", claudi.edad, claudi.nombre);
	
	return 0;
}





