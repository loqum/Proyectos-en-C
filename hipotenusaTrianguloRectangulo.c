#include<stdio.h>
#include<math.h>

int main() {
	float hipotenusa, cateto1, cateto2;
	
	printf("Introduce los dos catetos: ");
	scanf("%f %f", &cateto1, &cateto2);
	
	hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
	
	printf("\nLa hipotenusa es: %.2jf", hipotenusa);
	
	return 0;
}
