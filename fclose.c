#include<stdio.h>
#include<stdlib.h>

FILE *fd1;
FILE *fd2;

int main() {
	char dirHola[] = "C:\\Users\\rfernandezm\\Documents\\CAS Training\\hola.txt";
	char dirPrueba[] = "C:\\Users\\rfernandezm\\Documents\\CAS Training\\prueba.txt";
	
	fd1 = fopen(dirHola, "a+");
	fd2 = fopen(dirPrueba, "a+");
	
	if (fd1 == NULL || fd2 == NULL) {
		printf("Error");
	} else {
		printf("Se ha podido acceder a los archivos");
	}
	
	fclose(fd1);
	fclose(fd2);
			
	return 0;
}
