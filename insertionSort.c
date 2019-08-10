#include<stdio.h>
#include<conio.h>
void sortChar(char a[5]);

int main() {
	int i, aux, pos, array[5] = {5, 1, 4, 3, 2};
	char aChar[5] = {'a', 'w', 'z', 'r', 's'};

	
	for(i = 0; i < 5; i++) {
		pos = i;
		aux = array[i];
		while((pos > 0) && (aux < array[pos - 1])) {
			array[pos] = array[pos - 1];
			pos--;
		}
		array[pos] = aux;
	}
	
	printf("Ascendente:\n");
	for(i = 0; i < 5; i++) {
		printf("%i ", array[i]);
	}
	
	printf("\nDescendente:\n");
	for(i = 4; i >= 0; i--) {
		printf("%i ", array[i]);
	}
	
	sortChar(aChar);
	
	getch();
	return 0;
}

void sortChar(char array[5]) {	
	int i, aux, pos;
	
	for(i = 0; i < 5; i++) {
		pos = i;
		aux = array[i];
		while((pos > 0) && (aux < array[pos - 1])) {
			array[pos] = array[pos - 1];
			pos--;
		}
		array[pos] = aux;
	}
	
	printf("Ascendente:\n");
	for(i = 0; i < 5; i++) {
		printf("%c ", array[i]);
	}
	
	printf("\nDescendente:\n");
	for(i = 4; i >= 0; i--) {
		printf("%c ", array[i]);
	}
}
