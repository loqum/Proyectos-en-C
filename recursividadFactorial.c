#include<stdio.h>
long factorial(int n);

int main() {
	int number;
	
	printf("Introduce un numero: ");
	scanf("%i", &number);
	
	
	printf("%li\n", factorial(number));
	
	
	
	return 0;
}


long factorial(int n) {
	if (n <= 1) {
		return 1;
	} else {
		return (n * factorial(n - 1));
	}
}
