#include<stdio.h>
#define INCREMENTO 0.25

int main() {
	
	float salario, salarioFinal;
	
	printf("Introduce el salario: ");
	scanf("%f", &salario);
	
	salarioFinal = salario + (salario * INCREMENTO);
	
	printf("El salario con incremento es: %.2f", salarioFinal);
	
	return 0;
}
