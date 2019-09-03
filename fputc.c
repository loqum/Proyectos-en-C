#include<stdio.h>
#include<stdlib.h>

FILE *fd;
FILE *fd2;

int main() {
	int c;
	
	char dir[] = "C:\\Users\\rfernandezm\\Documents\\CAS Training\\archivo.txt";
	
	fd = fopen(dir, "wt");
	
	if (fd == NULL) {
		printf("Error al crear un archivo");
		return 1;
	} else {
		printf("Se ha podido crear el archivo\n\n");
	}
	
	while((c = getchar()) != EOF) {
		fputc(c, fd);
	}
	
	fclose(fd);
			
	return 0;
}
