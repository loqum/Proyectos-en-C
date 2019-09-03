#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main() {
	int c;

	char dir[] = "C:\\Users\\rfernandezm\\Documents\\CAS Training\\archivo.txt";

	fd = fopen(dir, "at");

	if (fd != NULL) {
		printf("Se ha podido acceder al archivo\n\n");
		
	} else {
		printf("Error al leer un archivo");
		return 1;
	}

	while((c = getchar()) != EOF) {
		fputc(c, fd);
	}

	fclose(fd);

	return 0;
}
