#include<stdio.h>

int main() {
	char nombre[30], signo[20];
	
	printf("Introduce el nombre: ");
	gets(nombre);
	printf("Introduce el signo: ");
	gets(signo);
	
	if (strcmp(signo, "aries") == 0) {
		printf("\nEs Aries, su nombre es %s", nombre);
	} else {
		printf("No es Aries");
	}
	
	return 0;
}
