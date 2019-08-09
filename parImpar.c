#include<stdio.h>

int main() {
	int num;
	
	printf("Introduce un numero: ");scanf("%i", &num);
	
	if (num % 2 == 0) {
		printf("Par");
		
	} else {
		printf("Impar");
	}
	
	return 0;
}
