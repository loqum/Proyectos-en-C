#include<stdio.h>
#include<conio.h>

int main() {
	int vector[10] = {1, 2, 3, 4, 4, 7, 8, 9, 5, 4};
	int *p_vector = &vector;
	int i;
	
	for (i = 0; i < 10; i++) {
		printf("\nLa posicion en memoria del numero[%i]: %i es %p", i, vector[i], p_vector);
		p_vector++;
	}
	
	getch();
	return 0;
}
