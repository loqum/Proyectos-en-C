#include<stdio.h>
#include<conio.h>
#define SIZE 20

int main() {
	char nombre1[SIZE], nombre2[SIZE];
	
	printf("Introduce tu nombre: ");
	gets(nombre1);
	
	strcpy(nombre2, nombre1);
	
	printf("\n Su nombre es: %s", nombre2);
	
	getch();
	return 0;
}
