#include<stdio.h>
#include<conio.h>

struct info_direccion {
	char direccion[30];
	char ciudad[30];
	char provincia[30];
};

struct empleado {
	char nombre[30];
	struct info_direccion dir_empleado;
	double salario;
} empleados [2];

int main() {
	int i;
	
	for (i = 0; i < 2; i++) {
		printf("%i. Introduce un nombre: ", i + 1);
		gets(empleados[i].nombre);
		printf("%i. Introduce la direccion: ", i + 1);
		gets(empleados[i].dir_empleado.direccion);
		printf("%i. Introduce la provincia: ", i + 1);
		gets(empleados[i].dir_empleado.provincia);
		printf("%i. Introduce la ciudad: ", i + 1);
		gets(empleados[i].dir_empleado.ciudad);
		printf("%i. Introduce el salario: ", i + 1);
		scanf("%lf", &empleados[i].salario);
		fflush(stdin);
	}
	



	getch();
	return 0;
}
