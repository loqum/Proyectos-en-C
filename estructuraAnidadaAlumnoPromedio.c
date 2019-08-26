#include<stdio.h>
#include<conio.h>

struct promedio {
	float nota1, nota2, nota3;
} promedioAlumno;

struct alumno {
	char nombre[30],
	     sexo[20];
	int edad;
	struct promedio promedio_alumno;
} alumno1;

int main() {
	
	float promedio;
	
	printf("Introduce el nombre del alumno: ");
	gets(alumno1.nombre);
	printf("Introduce el sexo del alumno: ");
	gets(alumno1.sexo);
	printf("Introduce la edad del alumno: ");
	scanf("%i", &alumno1.edad);
	printf("Introduce la primera nota del alumno: ");
	scanf("%f", &alumno1.promedio_alumno.nota1);
	printf("Introduce la segunda nota del alumno: ");
	scanf("%f", &alumno1.promedio_alumno.nota2);
	printf("Introduce la tercera nota del alumno: ");
	scanf("%f", &alumno1.promedio_alumno.nota3);

	promedio = (alumno1.promedio_alumno.nota1 + alumno1.promedio_alumno.nota2 + alumno1.promedio_alumno.nota3) / 3;
	
	printf("\nNombre: %s", alumno1.nombre);
	printf("\nSexo: %s", alumno1.sexo);
	printf("\nEdad: %i", alumno1.edad);
	printf("\nPromedio: %.2f", promedio);

	return 0;
}
