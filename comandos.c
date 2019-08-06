#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	int comando, numero, numeroAlCubo;
	
	printf("Introduce un numero y selecciona una opcion: \n1.Elevar al cubo\n2.Par o impar\n3.Salir\n");
	scanf("%i %i", &numero, &comando);
	
	switch (comando) {
		case 1:
			numeroAlCubo = pow(numero, 3);
			printf("%i", numeroAlCubo);
			break;
		case 2:
			if (numero % 2 == 0) {
				printf("El numero %i es par", numero); 
			} else {
				printf("El numero %i es impar", numero);
			}
			break;
		case 3:
			exit(EXIT_SUCCESS);
		default:
			break;
	}
	
	return 0;
}
