#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main() {
	char dir[] = "C:\\Users\\rfernandezm\\Documents\\CAS Training\\prueba.txt";
	
	fd = fopen(dir, "w");
	
	if (fd == NULL) {
		printf("El archivo no se ha podido crear");
	} else {
		printf("El archivo se ha creado en la ubicacion: %s", dir);
	}
	
			
	return 0;
}
