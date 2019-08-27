#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int *p1, i;

	p1 = calloc(5, sizeof(int));

	for (i = 0; i < 5; i++) {
		printf("Introduce un numero: ");
		scanf("%i", &p1[i]);
	}

	for (i = 0; i < 5; i++) {
		printf("%i ", p1[i]);
	}

	return 0;
}
