#include<stdio.h>
#include<conio.h>

int main() {
	int matriz[2][3] = {30, 20, 10, 45, 64, 69};
	int filas, columnas;
	
	for(filas = 0; filas < 2; filas++) {
		for(columnas = 0; columnas < 3; columnas++) {
			printf("%i ", matriz[filas][columnas]);
		}
		
		printf("\n");
	}
	
	
	getch();
	
	return 0;
}
