#include<stdio.h>
#include<conio.h>
void arraysEnteros();
void copiarArrays(int a[], int b[], int size);

int main() {
	
	arraysEnteros();
	
	
	
	return 0;
}

void arraysEnteros() {
	int arr[4];
	int arr2[4] = {2, 1, 5, 75};
	
	printf("Copiando arrays: \n\n");
	
	copiarArrays(arr, arr2, 4);
}

void copiarArrays(int a[], int b[], int size) {
	int i;
	
	for (i = 0; i < size; i++) {
		a[i] = b[i];
	}
	
	for (i = 0; i < size; i++) {
		printf("%i\n", a[i]);
	}
}


