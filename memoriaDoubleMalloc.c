#include<stdio.h>
#include<stdlib.h>
#define MAX 1000000000

int main() {
	double *p_array;
	int i;

	p_array = malloc(MAX * sizeof(double));

	if (p_array == NULL) {
		printf("MemoryError");
		return -1;
	} else {
		srand(time(NULL));
		for (i = 0; i < MAX; i++) {
			p_array[i] = 1 + rand() % ((MAX + 1) - 1);
			printf("%.2lf\n", p_array[i]);
		}
	}

	return 0;
}
