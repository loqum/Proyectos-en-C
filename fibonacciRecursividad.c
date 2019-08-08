#include<stdio.h>
int fibonacci(int n);

int main() {

	int i, number;

	printf("Introduce el numero de elementos: ");
	scanf("%i", &number);

	for (i = 1; i <= number; i++) {
		printf("%i\n", fibonacci(i));
	}

	return 0;
}

int fibonacci(int n) {

	if (n == 0 || n == 1) {
		return n;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}

}
