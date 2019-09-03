#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
	char cadena1[] = "Hola mundo";
	char cadena2[30];
	
	strcpy(cadena2, cadena1);
	
	strcpy(cadena2 + 5, "y bienvenido a programacion");
	
	printf("\n%s", cadena2);
	
	return 0;
}
