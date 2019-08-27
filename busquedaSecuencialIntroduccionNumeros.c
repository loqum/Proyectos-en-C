#include<stdio.h>
#include<conio.h>

int main() {
	
	int a[50];
	int size, numero, i = 0, j, x;
	char flag = 'F';
	
	printf("Introduce el tamaño del array: ");
	scanf("%i", &size);
	
	for(j = 0; j < size; j ++) {
		printf("Introduce el numero para la posicion [%i]: ", j);
		scanf("%i", &x);
		a[j] = x;
	}
	
	
	printf("Introduce un numero que quieras buscar: ");
	scanf("%i", &numero);
	
	while((flag == 'F') && (i < 10)) {
		if (a[i] == numero) {
			flag = 'V';
		}
		
		i++;
	}
	
	if (flag == 'V') {
		printf("El numero %i SI esta en la lista en la posicion %i", numero, i - 1);
	} else {
		printf("El numero %i NO esta en la lista", numero);
	}
	
	
	getch();
	return 0;
}
