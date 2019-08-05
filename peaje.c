#include<stdio.h>

int main() {
	
	char tipoVehiculo;
	
	printf("Introduce el tipo de vehiculo: \n");
	printf("[T] Turismo\n[A] Autobus\n[M] Moto\n");
	scanf("%c", &tipoVehiculo);
	
	switch (tipoVehiculo) {
		case 'T':
			printf("Debes pagar $500");
			break;
		case 'A':
			printf("Debes pagar $3000");
			break;
		case 'M':
			printf("Debes pagar $300");
			break;
		default:
			printf("Vehiculo NO autorizado");
			break;
			
	}
	
	
	return 0;
}
