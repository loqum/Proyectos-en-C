#include<stdio.h>
#include<conio.h>

int main() {
	struct empleado {
		char nombre[30];
		int edad;
		float salario;
	} empleados[3];

	int i, mayor = 0.0, menor = 9999999, pmay, pmen;

	for (i = 0; i < 3; i++) {
		printf("\nIntroduce el nombre del empleado %i: ", i + 1);
		gets(empleados[i].nombre);
		printf("\nIntroduce la edad del empleado %i: ", i + 1);
		scanf("%i", &empleados[i].edad);
		printf("\nIntroduce el salario del empleado %i: ", i + 1);
		scanf("%f", &empleados[i].salario);
		fflush(stdin);
	}

	for (i = 0; i < 3; i++) {
		if (empleados[i].salario > mayor) {
			mayor = empleados[i].salario;
			pmay = i;
		}
		
		if (empleados[i].salario < menor) {
			menor = empleados[i].salario;
			pmen = i;
		}
	}
	
	printf("\nEl empleado con el sueldo mas alto es %s", empleados[pmay].nombre);
	printf("\nEl empleado con el sueldo mas bajo es %s", empleados[pmen].nombre);

	getch();
	return 0;
}
