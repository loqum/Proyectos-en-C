#include<stdio.h>
#include<conio.h>

int main() {
	int a[5] = {4, 5, 1, 3, 2};
	int min, i, j, aux;
	
	for(i = 0; i < 5; i++) {
		min = i;
		for(j = i + 1; j <= 5; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		
		aux = a[i];
		a[i] = a[min];
		a[min] = aux;
	}
	
	printf("\nOrden ascendente: ");
	for(i = 0; i < 5; i++) {
		printf("%i ", a[i]);
	}
	
	printf("\nOrden Descendente: ");
	for(i = 4; i >= 0; i--) {
		printf("%i ", a[i]);
	}
		
	getch();
	return 0;
}


