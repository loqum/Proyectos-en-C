#include<stdio.h>

int main() {
	
	int horas, minutos, segundos, totalSegundos;
	
	printf("Introduce el numero de horas: ");
	scanf("%i", &horas);
	
	printf("Introduce el numero de minutos: ");
	scanf("%i", &minutos);
	
	printf("Introduce el numero de segundos: ");
	scanf("%i", &segundos);
	
	totalSegundos = (horas * 3600) + (minutos * 60) + segundos;
	
	printf("El total de segundos es: %i", totalSegundos);
	
	return 0;
}
