#include<stdio.h>


int main() {
	
	struct persona {
		char nombre[30];
		int edad;
	} personas[5];
	
	int i;
	
	for(i = 0; i < 5; i++) {
	
		
		printf("%i. Introduce un nombre: ", i + 1);
		gets(personas[i].nombre);
		
		printf("%i. Introduce una edad: ", i + 1);
		scanf("%i", &personas[i].edad);
		printf("\n");
	}
	
	
	return 0;
}
