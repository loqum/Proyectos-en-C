#include<stdio.h>
#include<conio.h>

int main() {
	int matriz[50][50], filas, columnas, i, j;
	
	
	printf("Introduce el numero de filas: ");
	scanf("%i", &filas);
	printf("Introduce el numero de columnas: ");
	scanf("%i", &columnas);
	
	for(i = 0; i < filas; i++) {
		for(j=0; j < columnas; j++) {
			printf("Introduce un numero de matriz[%i][%i]:  ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
		}
	}
	
	printf("\n\n");
	
	for(i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++) {
			printf("%i ", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	getch();
	return 0;
}
