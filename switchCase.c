#include<stdio.h>

int main() {
	int num;
	
	printf("Introduce un numero: ");
	scanf("%i", &num);
	
	switch(num) {
		case 1:
			printf("Numero 1");
			break;
		case 2:
			printf("Numero 2");
			break;
		case 3:
			printf("Numero 3");
			break;
		case 4:
			printf("Numero 4");
			break;
		default:
			printf("No hay numero");
			break;
			
	}
	
	return 0;
}
