/* Una tienda ofrece un 15% de descuento en la compra. El cliente desea saber cuánto pagará */

#include<stdio.h>
#define DESCUENTO 0.15

int main() {
	float precioFinal, precioSinDescuento;
	
	printf("Introduce el precio total de la compra: ");
	scanf("%f", &precioSinDescuento);
	
	precioFinal = precioSinDescuento - (precioSinDescuento * DESCUENTO);
	
	printf("El precio final es: %.2f", precioFinal);
	
	return 0;
}
