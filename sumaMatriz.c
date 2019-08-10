#include<stdio.h>
#include<conio.h>
void sumar(int a[][2], int b[][2]);

int main() {
	int matriz1[2][2] = {{2, 1}, {3, 4}};
	int matriz2[2][2] = {{4, 5}, {4, 8}};

	sumar(matriz1, matriz2);	
	
	
	return 0;
}

void sumar(int a[][2], int b[][2]) {
	int i, j, c[2][2];
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			printf("%i ", c[i][j]);
		}
		printf("\n");
	}
}
