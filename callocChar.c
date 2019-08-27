#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char *p1, palabra[50];

	printf("Introduce una palabra: ");
	gets(palabra);

	p1 = calloc(strlen(palabra) + 1, sizeof(char));

	strcpy(p1, palabra);
	
	printf("%s ", p1);

	free(p1);

	printf("\n\n%s ", p1);

	return 0;
}
