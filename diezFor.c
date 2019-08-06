#include<stdio.h>

int main() {
	
	int i, n, suma = 0;
	
	printf("Introduce un numero: ");
	scanf("%i", &n);
	
	for(i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			suma+=i;
		}
	}
	
	printf("%i", suma);
	
	return 0;
}
