#include<stdio.h>

int main() {
	char nota;
	
	printf("Introduce tu nota (en mayuscula) segun el estandar: ");
	scanf("%c", &nota);
	
	switch (nota) {
		case 'A':
			printf("Tu nota es %c: Excelente", nota);
			break;
		case 'B':
			printf("Tu nota es %c: Notable", nota);
			break;
		case 'C':
			printf("Tu nota es %c: Aprobado", nota);
			break;
		case 'D':
		case 'F':
			printf("Tu nota es %c: Suspendido", nota);
			break;
		default:
			printf("No has introducido un caracter correcto segun el estandar.");
	}
	
	return 0;
}
