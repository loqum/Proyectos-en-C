#include<stdio.h>
#include<stdlib.h>

int main() {
	int *vector;
	int i;
	
	vector = malloc(3 * sizeof(int));
	
	vector[0] = 1;
	vector[1] = 2;
	vector[2] = 3;
	
	for (i = 0; i < 3; i++) {
		printf("%i ", vector[i]);
	}
	
	vector = realloc(vector, 5 * sizeof(int));
	
	vector[3] = 4;
	vector[4] = 5;
	
	printf("\n\n");
	
	for (i = 0; i < 5; i++) {
		printf("%i ", vector[i]);
	}
	
	return 0;
}
