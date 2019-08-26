#include<stdio.h>

int main() {
	int h1, h2, m1, m2, s1, s2, totalSegundos1, totalSegundos2, totalSegundos, totalMinutos, totalHoras;

	printf("1. Introduce la hora: ");
	scanf("%i", &h1);
	printf("1. Introduce los minutos: ");
	scanf("%i", &m1);
	printf("1. Introduce los segundos: ");
	scanf("%i", &s1);
	printf("2. Introduce la hora: ");
	scanf("%i", &h2);
	printf("2. Introduce los minutos: ");
	scanf("%i", &m2);
	printf("2. Introduce los segundos: ");
	scanf("%i", &s2);

	totalSegundos1 = (h1 * 3600) + (m1 * 60) + s1;
	totalSegundos2 = (h2 * 3600) + (m2 * 60) + s2;

	totalSegundos = totalSegundos2 - totalSegundos1;
	totalMinutos = totalSegundos / 60;
	totalHoras = totalMinutos / 60;
	
	printf("%i:%i:%i", totalHoras, totalMinutos, totalSegundos);
	
	return 0;
}
