#include<stdio.h>
#include<time.h>
void function_random();

int main() {

	function_random();

	return 0;
}

void function_random() {
	int i, number, limiteSuperior, limiteInferior;

	srand(time(NULL));

	printf("Introduce el limite inferior y el limite superior: ");
	scanf("%i %i", &limiteInferior, &limiteSuperior);

	for(i = 1; i <= 10; i++) {
		number = limiteInferior + rand() % ((limiteSuperior + 1) - limiteInferior);
		printf("%i\n\n", number);
	}

}
