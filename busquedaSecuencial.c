#include<stdio.h>
#include<conio.h>

int main() {
	int a[5] = {3, 2, 4, 1, 5};
	char flag = 'F';
	int i, dato;
	
	dato = 40;
	
	i = 0;
	
	while((flag == 'F') && (i < 5)) {
		if(a[i] == dato) {
			flag = 'V';
		}
		
		i++;
	}
	
	if (flag == 'V') {
		printf("El numero %i SI esta en la lista.", dato);
	} else {
		printf("El numero %i NO esta en la lista.", dato);
	}
	
	getch();
	return 0;
}
