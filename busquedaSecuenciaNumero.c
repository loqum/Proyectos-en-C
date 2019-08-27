#include<stdio.h>
#include<conio.h>

int main() {
	
	int a[10] = {2, 3, 5, 1, 7, 8, 18, 34, 64, 63};
	int numero, i = 0;
	char flag = 'F';
	
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
