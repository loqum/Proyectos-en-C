#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char nombre[20];
	
/*	do {
		scanf("%s", nombre);
		
		if (!feof(stdin)) {
			printf("\n%s", nombre);
		}
	} while(!feof(stdin));
*/
	printf("Introduce tu nombre: ");
	gets(nombre);
	
	printf("%s", nombre);
	
	
	return 0;
}
