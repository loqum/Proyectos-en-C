#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *fd;

struct datosPersona {
	char nombre[20];
	char apellidos[20];
	char email[30];
} datos;

int main() {
	char rpt;
	char dir[] = "C:\\Users\\rfernandezm\\Documents\\CAS Training\\emails.txt";

	fd = fopen(dir, "wt");
	
	if (fd != NULL) {
		printf("Archivo creado en la ruta: %s", dir);
	} else {
		printf("Error al crear el archivo");
		return 1;
	}
	
	printf("\n\nf\t.:AGENDA DE EMAIL:.");
	fprintf(fd, "\t.:AGENDA DE EMAIL:.");
	
	do {
		fflush(stdin);
		printf("\n\nNombre: ");
		gets(datos.nombre);
		printf("\nApellido: ");
		gets(datos.apellidos);
		printf("\nEmail: ");
		gets(datos.email);
		
		fprintf(fd, "\n\nNombre: ");
		fwrite(datos.nombre, 1, strlen(datos.nombre), fd);
		
		fprintf(fd, "\nApellidos: ");
		fwrite(datos.apellidos, 1, strlen(datos.apellidos), fd);
		
		fprintf(fd, "\nEmail: ");
		fwrite(datos.email, 1, strlen(datos.email), fd);
		
		printf("¿Deseas agregar mas contactos? (s)");
		scanf("%c", &rpt);
		
	} while (rpt == 's');

	fclose(fd);

	return 0;
}
