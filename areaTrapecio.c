#include<stdio.h>

int main() {
	
	int baseMayor, baseMenor, altura, area;
	
	printf("Introduce la base mayor: ");
	scanf("%i", &baseMayor);
	
	printf("Introduce la base menor: ");
	scanf("%i", &baseMenor);
	
	printf("Introduce la altura: ");
	scanf("%i", &altura);
	
	area = ((baseMayor + baseMenor) * altura) / 2;
	
	printf("\nEl area del trapecio es: %i", area);
	
	return 0;
}
