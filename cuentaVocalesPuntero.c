#include<stdio.h>
#include<conio.h>

int main() {
	char nombre[30];
	char *p_nombre = nombre;
	int contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;

	printf("Introduce tu nombre: ");
	gets(nombre);
	
	while (*p_nombre) {
		switch (*p_nombre) {
			case 'a':
				contadorA++;
				break;
			case 'e':
				contadorE++;
				break;
			case 'i':
				contadorI++;
				break;
			case 'o':
				contadorO++;
				break;
			case 'u':
				contadorU++;
				break;
		}

		p_nombre++;
	}

	printf("\nEl numero de A es %i", contadorA);
	printf("\nEl numero de E es %i", contadorE);
	printf("\nEl numero de I es %i", contadorI);
	printf("\nEl numero de O es %i", contadorO);
	printf("\nEl numero de U es %i", contadorU);

	return 0;
}

