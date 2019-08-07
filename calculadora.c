#include<stdio.h>
void menu();
float sumar(float n1, float n2);
float restar(float n1, float n2);
float multiplicar(float n1, float n2);
float dividir(float n1, float n2);

int main() {
	
	menu();
	
	return 0;
}

void menu() {
	int opc;
	float n1, n2;
	
	do {
		
		printf("\n0. Salir");
		printf("\n1. Sumar");
		printf("\n2. Restar");
		printf("\n3. Multiplicar");
		printf("\n4. Dividir");
		printf("\n\nIntroduce una opcion: ");
		scanf("%i", &opc);
		
		if (opc != 0 && opc <= 4 && opc >= 1) {
			printf("\nIntroduce dos numeros: ");
			scanf("%f %f", &n1, &n2);
		}
		
		switch (opc) {
			case 1:
				printf("%.2f\n", sumar(n1, n2));
				break;
			case 2:
				printf("%.2f\n", restar(n1, n2));
				break;
			case 3:
				printf("%.2f\n", multiplicar(n1, n2));
				break;
			case 4:
				printf("%.2f\n", dividir(n1, n2));
				break;
			case 0:
				printf("\nBye\n");
				break;
			default:
				printf("\nFuncion desconocida\n");
				break;
		}
		
	} while(opc != 0);
	
}

float sumar(float n1, float n2) {
	return n1 + n2;
}

float restar(float n1, float n2) {
	return n1 - n2;
}

float multiplicar(float n1, float n2) {
	return n1 * n2;
}

float dividir(float n1, float n2) {
	return n1 / n2;
}

