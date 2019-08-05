#include<stdio.h>
#include<stdlib.h>

int main() {
	char tecla;
	
	printf("Programa de borrado de pantalla.");
	printf("\n--------------------------------------\n");
	printf("\n--------------------------------------\n");
	printf("\n--------------------------------------\n");
	printf("\n--------------------------------------\n");
	printf("\n--------------------------------------\n");
	printf("\n--------------------------------------\n");
	printf("\n--------------------------------------\n");
	printf("\nIntroduce el numero 1: ");
	scanf("%c", &tecla);
	
	if (tecla == '1') {
		system("cls");
		printf("Limpio");
		
	} else {
		//limpiar el buffer de memoria
		fflush(stdin);
		
		printf("\nNo has introducido el numero 1");
		printf("\nIntroduce el numero 1: ");
		scanf("%c", &tecla);
		
		if (tecla == '1') {
			system("cls");
		} else {
			printf("No has tecleado 1");
		}
	}
	
	return 0;
}
