#include<stdio.h>
#define PRECIO_HORA 10

int main() {
	float horasTrabajadas, salario;
	
	printf("Introduce las horas trabajadas: ");
	scanf("%f", &horasTrabajadas);
	
	salario = horasTrabajadas * PRECIO_HORA;
	
	printf("El salario es: %.2f", salario);
	
	return 0;
}
