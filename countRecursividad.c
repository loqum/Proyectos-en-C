#include<stdio.h>
int function_count(int n);

int main() {
	int i, n;

	printf("Introduce un numero: ");
	scanf("%i", &n);

	for (i = n; i >= 1; i--) {
		printf("%i", function_count(i));
	}

	printf("%i", function_count(n));


	return 0;
}


int function_count(int n) {

	if (n == 0 || n == 1) {
		return n;
	} else {
		return function_count(n - function_count(n));
	}

}
