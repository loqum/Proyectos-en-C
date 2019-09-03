#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
	char palabra[] = "hola";
	char palabra2[] = "adios";
	
	strupr(palabra);
	strupr(palabra2);
	
	printf("%s %s", palabra, palabra2);
	
	if (strcmp(palabra, palabra2) == 0) {
		printf("Son iguales");
	} else {
		printf("No son iguales");
	}
	
	return 0;
}
