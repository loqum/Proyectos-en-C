#include<stdio.h>
#include<conio.h>

int main() {
	int i, numero, hombre = 0, mujer = 0;
	char alumnos[30];
	
	printf("Introduce el total de alumnos: ");
	scanf("%i", &numero);
	
	for(i = 1; i <= numero; i++) {
		//liberar espacio en el buffer
		fflush(stdin);
		printf("\n %i Introduce el sexo del alumno: ", i);
		gets(alumnos);
		
		if (strcmp(alumnos, "hombre") == 0) {
			hombre++;
		} else if(strcmp(alumnos, "mujer") == 0) {
			mujer++;
		}
	}
	
	printf("\n Total hombres: %i", hombre);
	printf("\n Total mujeres: %i", mujer);
	
	return 0;
}
