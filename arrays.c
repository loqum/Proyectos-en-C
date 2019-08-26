#include<stdio.h>
#include<conio.h>
void arraysNumericos();
void arraysChars();
void arrayString();

int main() {
	//arraysNumericos();
	//arraysChars();
	arrayString();
	return 0;
}

void arraysNumericos() {
	int i;
	int a[] = {1, 3, 4, 2, 9};
	int b[2] = {1, 3};
	float c[5];
	
	for(i = 0; i < 5; i++) {
		printf("\n%i Introduce un numero: ", i + 1);
		scanf("%f", &c[i]);
	}
	
	for(i = 0; i < 5; i++) {
		printf("%.2f\n\n", c[i]);
	}
	
	getch();
}

void arraysChars() {
	char a[5] = {'a', 'b', 'c', 'd', 'w'};
	int i;
	
	for(i = 0; i < 5; i++) {
		printf("%c", a[i]);
	}
	
	getch();
}

void arrayString() {
	char a[20] = "Ruben", b[30];
	
	//printf("%s", a);
	
	printf("Introduce tu nombre: ");
	gets(b);
	
	printf("%s", b);
	
	getch();
}


