#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
	char cadena1[] = "Hola, que tal";
	
	strcat(cadena1, ", me llamo Pepe");
	
	printf("%s", cadena1);
	
	return 0;
}
