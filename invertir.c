#include<stdio.h>
void invertir(int n);

int main() {
	int n;
	
	printf("Introduce un numero: ");
	scanf("%i", &n);
	
	invertir(n);
	
	
	return 0;
}

void invertir(int n) {
	/*if (n < 0) {
		invertir(n / -1);
	} else {
		invertir(n * -1);
	}*/
	
	if (n > 0) {
		invertir(n * (-1));
		printf("%i", n);
	}
	
	
}

