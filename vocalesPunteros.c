#include<stdio.h>
#include<conio.h>

int cuentaVocales(char *);

int main() {
	char nombre[30];

	printf("Introduce tu nombre: ");
	gets(nombre);

	printf("El numero de vocales es %i", cuentaVocales(nombre));

	return 0;
}

int cuentaVocales(char *s) {
	int contador = 0;

	while (*s) {
		switch (*s) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				contador++;
		}

		s++;
	}
	
	return contador;
}
