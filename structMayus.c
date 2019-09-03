#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
	
	struct usuario {
		char nombre[20];
		char apellido[20];
		char ciudad[20];
	} usuario1;
	
	printf("Introduce tu nombre: ");
	gets(usuario1.nombre);
	printf("Introduce tu apellido: ");
	gets(usuario1.apellido);
	printf("Introduce tu ciudad: ");
	gets(usuario1.ciudad);
	
	strupr(usuario1.nombre);
	strupr(usuario1.apellido);
	strupr(usuario1.ciudad);
	
	printf("\nEl usuario %s %s vive en %s", usuario1.nombre, usuario1.apellido, usuario1.ciudad);
	
	return 0;
}
