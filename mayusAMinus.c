#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
	
	struct usuario {
		char nombre[20];
		char apellido[20];
	} usuario1;
	
	printf("Introduce tu nombre: ");
	gets(usuario1.nombre);
	printf("Introduce tu apellido: ");
	gets(usuario1.apellido);
	
	strlwr(usuario1.nombre);
	strlwr(usuario1.apellido);
	
	printf("\nUsuario: %s %s", usuario1.nombre, usuario1.apellido);
	
	return 0;
}
