#include<stdio.h>

float media(float n1, float n2);

int main() {
	float n1, n2;
	
	printf("Introduce dos numeros: ");
	scanf("%f %f", &n1, &n2);
	
	printf("%.2f", media(n1, n2));
	
	return 0;
}

float media(float n1, float n2) {
	return (n1 + n2) / 2;
}
