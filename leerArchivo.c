#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main() {
	int c;

	char dir[] = "C:\\Users\\rfernandezm\\Documents\\CAS Training\\archivo.txt";

	fd = fopen(dir, "rt");

	if (fd != NULL) {
		printf("Se ha podido acceder al archivo\n\n");
		
	} else {
		printf("Error al leer un archivo");
		return 1;
	}

	while((c = fgetc(fd)) != EOF) {
		if (c == '\n') {
			printf("\n");
		} else {
			putchar(c);
		}
	}

	fclose(fd);

	return 0;
}
