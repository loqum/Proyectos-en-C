#include<stdio.h>
void media(int n1, int n2);

int main() {
	int numero1, numero2;
	
	printf("Introduce dos numeros: ");
	scanf("%i %i", &numero1, &numero2);
	
	media(numero1, numero2);
	
	return 0;
}


void media(int n1, int n2) {
	float media = (float)(n1 + n2) / 2;
	printf("%.2f", media);
}
