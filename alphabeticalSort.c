#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
	char word1[20], word2[20];
	
	printf("Introduce la primera palabra: ");
	gets(word1);
	printf("Introduce la segunda palabra: ");
	gets(word2);
	
	if (strcmp(word1, word2) > 0) {
		printf("%s, %s", word2, word1);
	} else {
		printf("%s, %s", word1, word2);
	}
			
	return 0;
}
