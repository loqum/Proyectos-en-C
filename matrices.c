#include<stdio.h>
#include<conio.h>
void matrizEnteros();
void matrizFlotantes();
void matrizChar();

int main() {
	
	//matricesEnteros();
	
	//matricesFlotantes();
	
	matrizChar();
	
	getch();
	
	return 0;
}

void matrizEnteros() {
	int matriz[2][3] = {{30, 20, 34}, {45, 64, 69}};
	int filas, columnas;
	
	for(filas = 0; filas < 2; filas++) {
		for(columnas = 0; columnas < 3; columnas++) {
			printf("%i ", matriz[filas][columnas]);
		}
		
		printf("\n");
	}
}

void matrizFlotantes() {
	float matriz[4][5];
	int i, j;
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 5; j++) {
			printf("Introduce un numero para la matriz[%i][%i]: ", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
	}
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 5; j++) {
			printf("%.2f ", matriz[i][j]);	
		}
		printf("\n");
	}
}

void matrizChar() {  
	char matriz[2][3] = {{'a', 'b', 'c'}, {'s', 'r', 'w'}};
	int i, j;
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("%c ", matriz[i][j]);
		}
		
		printf("\n");
	}
	
	
}
