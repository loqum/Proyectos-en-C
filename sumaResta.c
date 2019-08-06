#include<stdio.h>

int main() {
	int n, contador = 1, sumaPares = 0, sumaImpares = 0, negativo, calculo = 0;
	
	printf("Introduce un numero: ");
	scanf("%i", &n);
	
	while (contador <= n) {
		
		if (contador % 2 == 0) {
			negativo = contador * (-1);
			sumaPares+=negativo;
		} else {
			sumaImpares+=contador;
		}
		
		contador++;
	}
	
	calculo = sumaPares + sumaImpares;
	
	printf("%i", calculo);
	
	return 0;
}
