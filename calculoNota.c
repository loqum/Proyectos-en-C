#include<stdio.h>
#define PARCIALES 0.55
#define EXAMEN 0.30
#define TRABAJO 0.15

int main() {
	
	float notaParcial1, notaParcial2, notaParcial3, promedioParciales, notaExamenFinal, notaTrabajoFinal, notaFinal;
		
	printf("Introduce las notas de los tres examenes parciales: ");
	scanf("%f %f %f", &notaParcial1, &notaParcial2, &notaParcial3);
	
	printf("Introduce la nota del examen final: ");
	scanf("%f", &notaExamenFinal);
	
	printf("Introduce la nota del trabajo final: ");
	scanf("%f", &notaTrabajoFinal);
	
	promedioParciales = (notaParcial1 + notaParcial2 + notaParcial3) / 3;
	
	notaFinal = (promedioParciales * PARCIALES) + (notaExamenFinal * EXAMEN) + (notaTrabajoFinal * TRABAJO);
	
	printf("La nota final es: %.2f", notaFinal);
	
	return 0;
}
