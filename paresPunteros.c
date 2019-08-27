#include<stdio.h>
#include<conio.h>

int main() {
	int a[10], i;
	int *p_a = a;

	for (i = 0; i < 10; i++) {
		printf("\nIntroduce un numero: ");
		scanf("%i", &a[i]);
	}

	for (i = 0; i < 10; i++) {
		if (p_a[i] != 0 && p_a[i] % 2 == 0) {
			printf("\n%i es par y su posicion en memoria es %p", p_a[i], p_a);
		}
		p_a++;
	}

	return 0;
}

