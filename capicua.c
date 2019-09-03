#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
	char palabra1[30];
	char palabra2[30];
	
	printf("Introduce una palabra: ");
	gets(palabra1);
	
	strcpy(palabra2, palabra1);
	
	strrev(palabra2);
	
	if (strcmp(palabra1, palabra2) == 0) {
		printf("%s es capicua", palabra1);
	} else {
		printf("%s no es capicua", palabra1);
	}
		
	return 0;
}
