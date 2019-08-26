#include<stdio.h>
#include<conio.h>

int main() {
	struct alumno {
		char nombre[30];
		int edad;
		float promedio;
	} alumno[3];
	
	int i;
	
	for (i = 0; i < 3; i++) {
		printf("\nIntroduce el nombre del alumno %i: ", i + 1);
		gets(alumno[i].nombre);
		printf("\nIntroduce la edad del alumno %i: ", i + 1);
		scanf("%i", &alumno[i].edad);
		printf("\nIntroduce el promedio del alumno %i: ", i + 1);
		scanf("%f", &alumno[i].promedio);
		fflush(stdin);
	}
	
	printf("\nEl mejor alumno es: ");
	
	if (alumno[0].promedio > alumno[1].promedio && alumno[0].promedio > alumno[2].promedio) {
		printf("%s", alumno[0].nombre);
	} else if (alumno[1].promedio > alumno[0].promedio && alumno[1].promedio > alumno[2].promedio) {
		printf("%s", alumno[1].nombre);
	} else if (alumno[2].promedio > alumno[0].promedio && alumno[2].promedio > alumno[1].promedio) {
		printf("%s", alumno[1].nombre);
	}	
	
	getch();
	return 0;
}
