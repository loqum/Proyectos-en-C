#include<stdio.h>
#include<math.h>

int main() {
	
	float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, resultado;
	
	printf("Introduce trece numeros: ");
	scanf("%f %f %f %f %f %f %f %f %f %f %f %f %f", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13);
	
	resultado = (pow((n1 * n2 * n3 * n4 * n5 * n6 * n7 * n8 * n9 * n10 * n11 * n12 * n13), (double)1/13));
	
	printf("La media geometrica es: %.2f", resultado);
	
	return 0;
}
