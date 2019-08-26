#include<stdio.h>

int main() {
	float notaExamen;
	
	printf("Introduce la nota del examen: ");
	scanf("%f", &notaExamen);
	
	if (notaExamen > 10.5) {
		printf("Aprobado");
	} else {
		printf("Suspendido");
	}
	
	
	return 0;
}
