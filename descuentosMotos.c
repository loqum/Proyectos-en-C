//Una distribuidora de motos tiene una promocion que consiste en que las motos marca honda tienen un descuento del 5%, las yamaha del 8% y las suzuki 10%. El resto, un 2%.

#include<stdio.h>
#define DESCUENTO_HONDA 0.05
#define DESCUENTO_YAMAHA 0.08
#define DESCUENTO_SUZUKI 0.10
#define DESCUENTO_RESTO 0.02

int main() {
	
	char marca[20];
	float precio, precioFinal;
	
	printf("Introduce la marca de la moto: \n[Yamaha]\n[Honda]\n[Suzuki]\n[Otros]\n ");
	gets(marca);
	
	printf("Introduce el precio: ");
	scanf("%f", &precio);
	
	if (strcmp(marca, "Honda") == 0) {
		precioFinal = precio - (precio * DESCUENTO_HONDA);
	} else if (strcmp(marca, "Yamaha") == 0) {
		precioFinal = precio - (precio * DESCUENTO_YAMAHA);
	} else if (strcmp(marca, "Suzuki") == 0) {
		precioFinal = precio - (precio * DESCUENTO_SUZUKI);
	} else if (strcmp(marca, "Otros") == 0) {
		precioFinal = precio - (precio * DESCUENTO_RESTO);
	} else {
		printf("No has introducido una marca del listado.");
	}
	
	printf("El precio de tu moto %s es %.2f", marca, precioFinal);	
	
	
	
	return 0;
}
