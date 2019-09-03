#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main() {
	char dir[] = "C:\\Users\\rfernandezm\\Documents\\CAS Training\\hola.txt";
	
	fd = fopen(dir, "r");
	
	if (fd == NULL) {
		printf("El archivo no existe");
	} else {
		printf("Se encontro el archivo en la ubicacion: %s", dir);
	}
		
	return 0;
}
