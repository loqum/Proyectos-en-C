#include<stdio.h>

int main() {
	int number, limit;
	
	printf("Introduce un numero y su limite: ");
	scanf("%i %i", &number, &limit);
	
	table(number, limit);
	
	return 0;
}

void table(int number, int limit) {
	int i;
	
	for (i = 0; i <= limit; i++) {
		printf("\n%ix%i = %i", number, i, (number * i));	
	}

}
