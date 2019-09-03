#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
	char word1[] = "Zapato";
	char word2[] = "zapato";
	
	if (strcmp(word1, word2) == 0) {
		printf("Ambas palabras son iguales");
	} else {
		printf("Ambas palabras son distintas");
	}
		
	return 0;
}
