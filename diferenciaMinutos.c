#include<stdio.h>

int main() {
	int h1, h2, m1, m2, s1, s2, totalSegundos1, totalSegundos2, totalSegundos, totalMinutos1, totalHoras1, totalHoras, totalMinutos;

	printf("1. Introduce la hora: ");
	scanf("%i", &h1);
	printf("1. Introduce los minutos: ");
	scanf("%i", &m1);
	printf("1. Introduce los segundos: ");
	scanf("%i", &s1);
	printf("2. Introduce los minutos: ");
	scanf("%i", &m2);


	totalSegundos1 = (h1 * 3600) + (m1 * 60) + s1;
	totalMinutos1 = totalSegundos1 / 60;
	totalHoras1 = totalMinutos1 / 60;
	
	totalSegundos2 = (m2 * 60);
	
	totalSegundos = totalSegundos1 + totalSegundos2;
	
	totalHoras = (totalSegundos / 3600);
	totalMinutos = (totalSegundos / 60) % 60;
	
	printf("%.2i:%.2i:%.2i", totalHoras, totalMinutos, (totalSegundos % 60));
	
	return 0;
}
