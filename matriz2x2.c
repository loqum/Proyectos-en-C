#include<stdio.h>
#include<conio.h>

int main() {
	int i, j, matriz[2][2], otraMatriz[2][2];
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			printf("Introduce un numero para la matriz [%i][%i]: ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
		}
		
		printf("\n");
	}
		
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			otraMatriz[i][j] = matriz[i][j];
			printf("%i ", otraMatriz[i][j]);
		}
		
		printf("\n");
	}
	
	getch();
	return 0;
}

