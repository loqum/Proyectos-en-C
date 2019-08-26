#include<stdio.h>
#include<time.h>
void generate_random_array(int cantidad, int limiteInferior, int limiteSuperior);

int main() {
	int i, cantidad, limiteInferior, limiteSuperior;

	printf("Introduce el tamanyo del array: ");
	scanf("%i", &cantidad);

	printf("\nIntroduce el limite inferior y el limite superior: ");
	scanf("%i %i", &limiteInferior, &limiteSuperior);

	generate_random_array(cantidad, limiteInferior, limiteSuperior);

	//printf("%i", generate_random_array(cantidad, limiteInferior, limiteSuperior));

	return 0;
}

void generate_random_array(int cantidad, int limiteInferior, int limiteSuperior) {
	int i, arrayPar[cantidad], arrayImpar[cantidad], numberRand;
	
	srand(time(NULL));
	
	for(i = 0; i < cantidad; i++) {

		numberRand = limiteInferior + rand() % ((limiteSuperior + 1) - limiteInferior);

		if (esPar(numberRand) == 1) {
			arrayPar[i] = numberRand;
		} else {
			arrayImpar[i] = numberRand;
		}

		printf("Impares: %i ", arrayImpar[i]);
		printf("\n\n");
		printf("Pares: %i ", arrayPar[i]);
	}

}

int esPar(int n) {
	if (n % 2 == 0) {
		return 1;
	} else {
		return 0;
	}
}
